#include<stdio.h>
#include<string.h>
void invert1(char *a,int *b);
void calculate(int *b1,int *b2,int *b0,int len1,int len2);
void invert2(int *b0,char *a0,int len);
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	char a1[501]={NULL},a2[501]={NULL},a0[1002]={NULL};
	int b1[501]={NULL},b2[501]={NULL},b0[1002]={NULL};
	scanf("%s %s",a1,a2);
	invert1(a1,b1);
	invert1(a2,b2);
		int len1=strlen(a1);
		int len2=strlen(a2);
	calculate(b1,b2,b0,len1,len2);
	int len=len1+len2;
	invert2(b0,a0,len);
	printf("%s\n",a0);
	
	}
	return 0;
}
void invert1(char *a,int *b){
	int len=strlen(a);
	int j=0;
	for(int i=len-1;i>=0;i--){
		b[j]=a[i]-'0';
		j++;
	}
}
void calculate(int *b1,int *b2,int *b0,int len1,int len2){
		b0[0]=0;
	for(int i=0;i<len2;i++){
		for(int k=0;k<len1;k++){
			b0[i+k]+=b1[k]*b2[i]; 
		}
	}
	for(int j=0;j<len1+len2;j++){
		b0[j+1]+=b0[j]/10;
		b0[j]=b0[j]%10;
	}
}
void invert2(int *b0,char *a0,int len){
	int j=0;
	int i=len-1;
	while(b0[i]==0){
		i--;
	}
	for(i;i>=0;i--){
		a0[j]=b0[i]+'0';
		j++;
	}
}
