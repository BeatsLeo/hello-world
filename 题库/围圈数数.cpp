#include<iostream>
using namespace std;
int main(){
	int n,k,m;
	cin>>n;
	int a[n];
	cin>>k;
	int i=0;
	int j=1;
		   for(int h=0;h<n;h++){
	   	a[h]=2;
	   }
	while(1){
			if((a[i])==0){
				i++;
				continue;
			} 
		a[i]=j;
		if((a[i])%k==0){
			a[i]=0;
			j=0;
		}
		i++,j++;
		if(i==n){
			i=0;
		}
	   for(int h=0;h<n;h++){
	   	m+=a[h];
	   }
	   if(m==1||m==0){
	   	for(int p=0;p<n;p++){
		   if((a[p])!=0){
		   	printf("%d",p+1);
		   	break;
	   }
	}
	   }
			}
return 0;
}

