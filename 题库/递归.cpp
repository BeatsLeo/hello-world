#include<stdio.h>
int a(int n,int *a,int *c,int k){
	if(k-1==n){
		printf("-->");
		for(int i=k;i<k;i++){
			if(c[i]==1){
				printf("%d ",a[i]);
			}
		}
		printf("\n");
	}
	c[k]=1;
	a(n,a,c,k++);
	c[k]=0;
	a(n,a,c,k++);
}
