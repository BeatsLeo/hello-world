#include<stdio.h>
void swap(int *x, int *y);//���õ��ú��� 
int m(int x,int y);//max()���� 
int s(int m,int n);//��ֵ���ú��� 

//���������� 
int main()
{
	//1
	int a=100,b=200,c;
	c=m(a,b);
	//2
	int d=300,e=400,f;
	f=m(d,e);
	//3
	s(a,b);
	printf("%d %d\n",a,b);
    //4
	swap(&a, &b);
	printf("%d %d\n",a,b);
	return 0; 
}
//��max()��Ч�ĺ��� 
 int m(int x,int y){
 	printf("���������Ϊ��%d %d�����д����Ϊ��",x,y);	 
	 if(x>y){
 		printf("%d\n",x);
	 }
 	else if(y>=x){
 		printf("%d\n",y);
	 }
 	return 999;
 }
 //���ı�ԭ��������ֵ�Ĵ�ֵ���ú��� 
 int s(int m,int n){
 int bridge;
 bridge=m;
 m=n;
 bridge=n;
 return m,n;
 } 
 //�ı�ԭ��������ֵ�����õ��ú���
 void swap(int *x, int *y)
{
   int temp;
   temp = *x;    /* �����ַ x ��ֵ */
   *x = *y;      /* �� y ��ֵ�� x */
   *y = temp;    /* �� temp ��ֵ�� y */
    return;
} 
