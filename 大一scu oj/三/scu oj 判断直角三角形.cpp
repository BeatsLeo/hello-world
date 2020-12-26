#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a[4]={NULL};
		scanf("%d",&a[0]); 
	    scanf("%d",&a[1]);
	    scanf("%d",&a[2]);
	    if(a[0]+a[1]>a[2]&&a[1]+a[2]>a[0]&&a[0]+a[2]>a[1]){
	    if((a[0]*a[0]+a[1]*a[1]==a[2]*a[2])||(a[2]*a[2]+a[1]*a[1]==a[0]*a[0])||(a[0]*a[0]+a[2]*a[2]==a[1]*a[1])){
	    	printf("Yes\n");
		}
		
		else{
			printf("No\n");
		}
	}
		else{
			printf("No\n");
		}
	}
	return 0;
}
