#include<stdio.h>
int main(){
	long long n,k,m;
	scanf("%lld %lld",&n,&k);
	if(n==0&&k!=0){
		printf("-1");
		return 0;
	}
	int a[n];
	int zz=0;
	for(long long i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(int xx=0;xx<n;xx++){
		if(a[xx]>zz){
			zz=a[xx];
		}
	}
	for(long long l=0;l<=zz;l++){
		m=0;
	for(long long j=0;j<n;j++){
		if(l>=a[j]){
		m++;
		}
	}
	 if(m==k){
	 	printf("%lld",l);
	 	return 0;
	 } 
}
      printf("-1");
          return 0;
}
