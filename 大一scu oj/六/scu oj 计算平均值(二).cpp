#include<stdio.h>
#include<string.h>
int convert(char *a);
int main(){
	int n;
	int flag=0;
	scanf("%d",&n);
	int d[n]={0};
	for(int i=0;i<n;i++){
	char a[1000]={NULL};
		scanf("%s",a);
		if(a[0]!='n'&&a[1]!='/'&&a[2]!='a'){
			flag++;
			d[i]=convert(a);
		}
	}
	if(flag){
	long long f=0;
	for(int i=0;i<n;i++){
		f+=d[i];
	}
	printf("%.2f",(float)f/flag);
}
else printf("n/a");
	return 0;
}
int convert(char *a){
	int l=strlen(a);
	long long d=0;
	for(int i=0;i<l;i++){
		if(a[i]=='-'){
			continue;
		}
		d=d*10+a[i]-'0';
	}
	if(a[0]=='-')return d*(-1);
	return d;
}
