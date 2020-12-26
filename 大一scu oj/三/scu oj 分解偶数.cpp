#include<stdio.h>
int judge(int x);
int main(){
	int n;
	scanf("%d",&n);
    int flag=1,com=0,judge1=NULL,judge2=NULL;
	for(int i=0;i<(n+3)/2;i++){
		com=n-i;
		judge1=judge(com);
		judge2=judge(i);
		if(judge1==0||judge2==0){
			continue;
		}
		flag=0;
		printf("%d %d\n",i,com);
	}
	if(flag){
		printf("ERROR\n");
	}
	return 0;	
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
