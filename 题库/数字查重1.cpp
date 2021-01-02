#include<stdio.h>
int main(){
	T:
	while(1){
	int flag;
	printf("输入1开始程序，输入0退出程序:\n");
	scanf("%d",&flag);
	switch(flag){
		case 0:return 0;
		case 1:break;
		default:printf("请输入正确的数字！\n\n");
		goto T;
	}
	int n;
	printf("输入数字的位数："); 
	scanf("%d",&n);
	int a[n];
	printf("输入该数字：");
	for(int i=0;i<n;i++){
		scanf("%1d",&a[i]);
	}
	for(int j=0;j<n;j++){
		for(int m=0;m<n;m++){
			if((a[j]==a[m])&&(j!=m)){
				printf("数字有重复！\n\n");
				goto T;
			}
		}
	}
    printf("数字无重复。\n\n");
goto T;
}}
	
