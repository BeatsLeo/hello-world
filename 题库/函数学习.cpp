#include<stdio.h>
void swap(int *x, int *y);//引用调用函数 
int m(int x,int y);//max()函数 
int s(int m,int n);//传值调用函数 

//主函数测试 
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
//与max()等效的函数 
 int m(int x,int y){
 	printf("你输入的数为：%d %d，其中大的数为：",x,y);	 
	 if(x>y){
 		printf("%d\n",x);
	 }
 	else if(y>=x){
 		printf("%d\n",y);
	 }
 	return 999;
 }
 //不改变原函数参数值的传值调用函数 
 int s(int m,int n){
 int bridge;
 bridge=m;
 m=n;
 bridge=n;
 return m,n;
 } 
 //改变原函数参数值的引用调用函数
 void swap(int *x, int *y)
{
   int temp;
   temp = *x;    /* 保存地址 x 的值 */
   *x = *y;      /* 把 y 赋值给 x */
   *y = temp;    /* 把 temp 赋值给 y */
    return;
} 
