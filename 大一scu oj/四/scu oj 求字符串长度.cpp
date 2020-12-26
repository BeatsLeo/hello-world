#include<stdio.h>
#include<string.h>
int main(){
	char n[2000];
	int l;
	fgets(n,2000,stdin);
	l=strlen(n);
	printf("%d",l-1);
return 0;
} 
