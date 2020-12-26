#include<stdio.h>
#include<string.h>
int com(int *x,int m,int n);
int main(){
	int m,n;
	scanf("%d %d\n",&m,&n);
	char a1[1000]={NULL},a2[1000]={NULL},a3[2]={NULL},p[3];
	a3[0]=' ';
	fgets(a1,2*m,stdin);
	p[0]=getchar();
	fgets(a2,2*n,stdin); 
	strcat(a1,a3);
	strcat(a1,a2);
	int l=strlen(a1);
	int num[l]={0};
	int nw=0;
	for(int i=0;i<l;i++){
		if(a1[i]<'0'||a1[i]>'9'){
			nw++;
			continue;
		}
		if(a1[i]>='0'&&a1[i]<='9'){
			num[nw]=num[nw]*10+a1[i]-'0';
		}
	}
	com(num,m,n);
	for(int i=m+n-1;i>=0;i--){
	printf("%d ",num[i]);
}
}
int com(int *x,int m,int n){
	int t;
	for(int j=0;j<m+n+1;j++){
	for(int i=n+m-1;i>j;i--){
		if(x[i]>x[i-1]){
		t=x[i];
		x[i]=x[i-1];
		x[i-1]=t;	
		}
	}
}
return 0;
}
