#include<stdio.h>
int main(){
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	int n=0;
	for(int i=0;i<10;i++){
		if(a[i]!=0&&i>0){
			printf("%d",i);
			n=i;
			break;
		}
	}
	for(int i=0;i<10;i++){
		if(i==n){
			a[i]--;
		}
		for(int j=0;j<a[i];j++){
		printf("%d",i);
	}
	}
	printf("\n");
	return 0;
}
