#include<stdio.h>
int divide(int x); 
int judge(int x);
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a,b;
		scanf("%d",&a);
		b=judge(a);
		if(b==1||a<=2){
			printf("%d\n",a);
		}
		if(b==0){
			divide(a);
		}
	}
	return 0;
}
int divide(int x){
	for(int i=2;i<x;i++){
	int n=-1;
		if(x%i==0){
		x/=i;
		n=judge(x);	
		}
		if(n==0&&x>2){
			printf("%d*",i);
			return divide(x);
		}
		else if(n==1||x==2){
			printf("%d*%d\n",i,x);
		}
	}
}
int judge(int x){
	int n=1;
	if(x<=2){
		return 0;
	}
	for(int i=2;i<x;i++){
		if(x%i==0){
		n=0;	
		}
	}
	return n;
}
