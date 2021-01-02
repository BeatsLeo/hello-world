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
	printf("请输入一个数字:");
	scanf("%d",&n);
	int digit[10]={0};
	int a;
	while(n>0){
		a=n%10;
		if(digit[a]){
			break;
		}
		digit[a]=1;
		n/=10;
	}
	if(n>0){
		printf("数字有重复！\n\n");
	}
	else{
		printf("数字无重复。\n\n");
	} 
}}
