#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d\n",&n);
	char c[201]={NULL};
	fgets(c,201,stdin);
	int len=strlen(c);
	int begin=len-n;
	char b[n+len]={NULL}; 
	for(int i=0;i<n;i++){
		b[i]=c[begin+i-1];
		c[begin+i-1]=NULL;
	}
	strcat(b,c);
	puts(b);
	return 0;
}
