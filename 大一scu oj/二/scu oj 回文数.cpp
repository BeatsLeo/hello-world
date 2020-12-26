#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int num=NULL,flag=1;
		scanf("%d",&num);
		int b=num,c=num;
		while(b/=10){
			flag++;
		}
		int newnum=0;
		for(int j=0;j<flag;j++){
			int a=1;
			for(int k=flag-1;k>j;k--){
				a*=10;
			}
			newnum+=(num%10)*a;
			num/=10;
			}
			if(newnum==c){
				printf("Yes\n");
			}
			else
			printf("No\n");
		}
		return 0;
}
