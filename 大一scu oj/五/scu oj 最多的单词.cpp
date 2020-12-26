#include<stdio.h>
#include<string.h>
int judge(int l,char *c,int m,int n);
int main(){
	char f[1000]={NULL},c;
	int n=0;
	while(scanf("%c",&c)!=EOF){
		f[n]=c;
		n++;
	}
	int l=strlen(f),m=-1,ff=0,f1=0;
	for(int i=0;i<l;i++){
		if(f[i]>='A'&&f[i]<='Z'){
			f[i]+='a'-'A'; 
		}
	}
	int ii,nw=0,mm=0;
	for(int i=0;i<l;i++){
		int k=0;
		if(f[i]<'A'||f[i]>'z'){
			k=i-m-1;
			if(k){
				f1=judge(l,f,k,m+1);
				if(f1>ff){
					ff=f1;
					ii=m+1;
					mm=k;
				}
				else if(f1==ff){
					char tem1[k],tem2[mm];
					for(int j=0;j<k;j++){
						tem1[j]=f[m+1+j];
					}
					for(int j=0;j<mm;j++){
						tem2[j]=f[ii];
					}
					(strcmp(tem1,tem2)<0)?(ii=ii,mm=mm):(ii=m+1,mm=k);
				}
			}
			m=i;
		}
	}
	char final[mm+1]={NULL};
	for(int i=0;i<mm;i++){
		final[i]=f[ii+i];
	}
	printf("%s %d",final,ff);
	return 0;
}
int judge(int l,char *c,int m,int n){
	char a[m]={NULL};
	int f=0;
	for(int i=0;i<m;i++){
		a[i]=c[n+i];
	}
	for(int i=0;i<l;i++){
		if(a[0]==c[i]&&(c[i-1]>'z'||c[i-1]<'A')){
			for(int j=0;j<m;j++){
				if(a[j]!=c[i+j]){
					break;
				}
				if(j==m-1&&(c[i+j+1]>'z'||c[i+j+1]<'A')){
					f++;
				}
			}
		}
	}
	return f;
}
