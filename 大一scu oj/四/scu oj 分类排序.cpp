#include<stdio.h>
#include<string.h>
int com(int *x,int m,int n); 
int main(){
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		char m[2000];
		fgets(m,2000,stdin);
		int l=0;
		l=strlen(m);
		int a[l]={0},f=0;
		for(int j=0;j<l;j++){
			if(m[j]>=48&&m[j]<=57&&m[j+1]>=48&&m[j+1]<=57&&m[j+2]>=48&&m[j+2]<=57){
				a[f]/=10;
				a[f]=a[f]*10+(m[j]-'0');
				a[f]=a[f]*10+(m[j+1]-'0');
			}
			else if(m[j]>=48&&m[j]<=57&&m[j+1]>=48&&m[j+1]<=57&&(m[j+2]>57||m[j+2]<48)){
				a[f]/=10;
				a[f]=a[f]*10+(m[j]-'0');
				a[f]=a[f]*10+(m[j+1]-'0');
				f++;
			}
			else if(m[j]>=48&&m[j]<=57&&(m[j+1]==' '||m[j+1]=='\n')&&(m[j-1]==' '||m[j-1]=='\n'||m[j-1]==NULL)){
				a[f]=m[j]-'0';
				f++;
			}
		}
		int b[f],ff=0;
		for(int j=0;j<f;j++){
			if(a[j]%2==1){
				b[ff]=a[j];
				ff++;
			}
		}
		com(b,0,ff-1);
		int fff=ff;
		for(int j=0;j<f;j++){
			if(a[j]%2==0){
				b[fff]=a[j];
				fff++;
			}
		}
		com(b,ff,fff-1);
		for(int j=0;j<fff;j++){
			printf("%d ",b[j]);
		}
		printf("\n");
		}
		return 0;
	}
int com(int *x,int m,int n){
	int t;
	for(int j=0;j<n-m+1;j++){
	for(int i=m;i<n-j;i++){
		if(x[i]>x[i+1]){
		t=x[i];
		x[i]=x[i+1];
		x[i+1]=t;	
		}
	}
}
return 0;
}
