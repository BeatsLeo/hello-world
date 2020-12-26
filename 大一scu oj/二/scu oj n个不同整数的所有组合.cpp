#include<stdio.h>
int combination(int *x,int n,int y,int k);
int main(){
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		int n=NULL;
        scanf("%d",&n);
        if(n==0){
        	printf("--> \n");
		}
        int a[n+1]={NULL};
        for(int j=0;j<n;j++){
        	scanf("%d",&a[j]);
		}
		for(int k=0;k<n;k++){
		combination(a,n,0,k);
		if(k<n-1){
		printf("\n");
	}
	    if(k==n-1){
	    	printf("\n--> \n");
		}
	}
}
}
int combination(int *x,int n,int y,int k){
	if(y==n+1){
		return 0;
	}
	combination(x,n,y+1,k);
	int m=y-1;
	  for(int j=y;j<n+1;j++){
		  	if(j<=k){
	  		break;
		  }
		  if(j==k){
	  		printf("\n");
	  		break;
		  }
	  	printf("--> ");
      for(int i=k;i<y-1;i++){
      	printf("%d ",x[i]);
	  }
	  if(m==k){
	  	printf("%d ",x[m]);
	return 0;
	}
	  if(m>=k){
	  	printf("%d ",x[m]);
	  	m++;
	  }
	  printf("\n");
  }
  return 0;
}
