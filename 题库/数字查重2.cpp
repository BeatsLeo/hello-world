#include<stdio.h>
int main(){
	T:
	while(1){
		int flag;
	printf("����1��ʼ��������0�˳�����:\n");
	scanf("%d",&flag);
	switch(flag){
		case 0:return 0;
		case 1:break;
		default:printf("��������ȷ�����֣�\n\n");
		goto T;
	}
	int n;
	printf("������һ������:");
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
		printf("�������ظ���\n\n");
	}
	else{
		printf("�������ظ���\n\n");
	} 
}}
