#include<stdio.h>
int main()
{   
    int x,y,z,o;
	int a[]={};
	printf("请依次输入四个成绩:\n"); 
	scanf("%d%d%d%d",&a[1],&a[2],&a[3],&a[4]);
	for(int i=1;i<=4;i++){
		if(90<=a[i]&&a[i]<=100){
			printf("A\n");
		}
		else if(80<=a[i]&&a[i]<90){
			printf("B\n");
		}
		else if(70<=a[i]&&a[i]<80){
			printf("C\n");
		}
		else if(60<=a[i]&&a[i]<70){
			printf("D\n");
		}
		else if(0<=a[i]&&a[i]<=60){
			printf("E\n");
		}
		else{
			printf("Score is error!\n");
		}
	}
	scanf("%d",&x);
	printf("%d",x);
	return 0;
}
