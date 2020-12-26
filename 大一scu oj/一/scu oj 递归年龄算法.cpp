#include<stdio.h>
int circle(int x,int y,int z);
int main(void){
    int n,a,k,output;
	scanf("%d %d %d",&n,&a,&k);
    if(n<2||a>100||k>100||a<=0||k<=0){
    	printf("Wrong Number");
    	return 0;
	}
    output=circle(n,a,k);
    printf("%d",output);
	return 0;	
}
int circle(int x,int y,int z){
	static int m=y;
	static int flag=1;
	m+=z;
	flag++;
	if(flag<x){
	return circle(x,y,z);
}
    if(flag==x){
    	return m;
	}
}
