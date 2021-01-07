#include<stdio.h>
int main(){
	long long n;
	scanf("%lld",&n);
 if(n%2==1){
 	printf("%lld",(-1)-n/2);
 }
 if(n%2==0){
	printf("%lld",n/2);
}
	return 0;
}
