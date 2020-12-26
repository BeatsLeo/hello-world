#include<stdio.h>
int main(){
	int m;
	scanf("%d",&m);
	int a[m]={NULL};
	int b[m]={NULL};
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
		b[i]=a[i]*a[i];
	}
	int flag=0;
	for(int i=0;i<m;i++){
		if(b[flag]<b[i]){
			flag=i;
		}
	}
	printf("%d",a[flag]);
    return 0;
}
