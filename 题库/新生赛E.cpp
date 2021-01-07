#include<stdio.h>
int main(){
	int n,k,total=0,average;
	scanf("%d %d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",a[i]);
	}
	for(int j=0;j<n;j++){
	total+=a[j];
	}
	average=total/k;
	int total2=0,l=0,m=0,t=0;
     int aa[n];
     int q=0;
	for(int p=0;p<n;p++){
		t++; 
		total2+=a[l];
		if(total2==average){
			m++;
			aa[q]=t;
			q++;
			t=0;
			total2=0;
		}
	}
	if(m==k){
		printf("Yes\n");
		for(int z=0;z<=q;z++){
			printf("%d ",a[z]);
		}
	}
	if(m!=k){
		printf("No\n");
	}
	return 0;
}
