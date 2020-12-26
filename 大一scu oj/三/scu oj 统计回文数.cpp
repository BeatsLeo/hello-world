#include<stdio.h>
#include<stdlib.h>
int huiwen(long long a,long long m);
int main(){
	char c;
	long long a=0,b=0,f=0,aa[100]={0};
	while(scanf("%c",&c)!=EOF){
		if(c==48){
			long long m;
			scanf("%lld",&m);
			m=0;
		} 
		if(c>48&&c<=57){
			c=c-'0';
			a=c;
			long long m;
			scanf("%lld",&m);
		    b=huiwen(a,m);
		     if(b!=-1){
		     	aa[f]=b;
		    	f++;
			}
		}
	}
	if(f==0){
		printf("None");
		return 0;
	}
	/*ÅÅÐò*/
	int q=0;
	for(int j=0;j<f;j++){
	for(int i=0;i<f;i++){
    	 if(aa[i]<aa[i+1]){
    	 	q=aa[i];
    	 	aa[i]=aa[i+1];
    	 	aa[i+1]=q;
		 }
	}
}
    long long num1=1,num2[f]={0};
    int num[f]={0};
	for(int i=0;i<f;i++){
		num[i]=1;
	}
    for(int i=0;i<f;i++){
    	if(aa[i]==aa[i+1]){
    		num[i]++;
    		num[i+1]++;
		}
	}
	for(int i=0;i<f;i++){
		if(num[i]>num1){
			num1=num[i];
		}
	}
	for(int i=0;i<f;i++){
		if(num[i]==num1){
			num2[i]=1;
		}
	}
	if(f!=0){
		for(int i=f-1;i>=0;i--){
	    if(num2[i]&&aa[i]==aa[i+1]){
		printf("%lld %lld\n",aa[i],num1);
	}
		}
	}
	return 0;
}

int huiwen(long long a,long long m){
	int x=0,y=0;
	if(a==(m%10)){
		long long z=m,zz=m;
		while(z){
			z/=10;
			y++;
		}
		for(int i=0;i<y;i++){
		x=x*10+m%10;
	    m/=10;	
	}
	x=x*10+a;
	long long o=1;
	for(int i=0;i<y;i++){
		o=o*10;
	}
	if(x==a*o+zz){
	return x;
	}
}
	else{
    return -1;	 
}
} 
