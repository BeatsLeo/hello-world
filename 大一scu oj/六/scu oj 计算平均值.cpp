#include<stdio.h>
int main(){
	int n;
    int a[n];
    scanf("%d",&n);
    if(n>=1&&n<=100){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int f=0;
	for(int i=0;i<n;i++){
		f=f+a[i];
	}
	printf("%.2f",(float)f/n);
}
	return 0;
}
