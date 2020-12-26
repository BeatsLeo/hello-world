#include<stdio.h>
int judge(int x,int f);
int main(){
	int n;
	int f=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a=0,b=0;
		scanf("%d %d",&a,&b); 
		for(int j=a;j<=b;j++){
			f=judge(j,f);
		}
	if(f==0){
		printf("-1");
	printf("\n"); 
	}
	}
	return 0;
}
int judge(int x,int f){
	int n=1,m=x,z=x;
	while(m/=10){
		n++;
	}
	int y=0;
	for(int i=0;i<n;i++){
		y+=(z%10)*(z%10)*(z%10);
		z/=10;
	}
	if(x==y){
		printf("%d ",x);
		return 1;
	}
	else{
	return f;
}
}
