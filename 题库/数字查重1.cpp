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
	printf("�������ֵ�λ����"); 
	scanf("%d",&n);
	int a[n];
	printf("��������֣�");
	for(int i=0;i<n;i++){
		scanf("%1d",&a[i]);
	}
	for(int j=0;j<n;j++){
		for(int m=0;m<n;m++){
			if((a[j]==a[m])&&(j!=m)){
				printf("�������ظ���\n\n");
				goto T;
			}
		}
	}
    printf("�������ظ���\n\n");
goto T;
}}
	
