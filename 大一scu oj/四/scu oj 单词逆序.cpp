#include<stdio.h>
#include<string.h>
int main(){
	char a[2000]={0};
	fgets(a,2000,stdin);
	int l=strlen(a);
	int f=0,z=-1,ff=0;
	for(int i=0;i<l-1;i++){
		if(a[i]<'A'||a[i]>'z'){
		    ff++;
			f=i-z-1;
			z=i;
		}
		if(a[i+2]=='0'){
			f=i-z;
			z=i;
			for(int j=z;j>z-f;j++){
				printf("%c",a[j]);
			}
		}
		if(z>=1&&z==i){
			for(int j=z-1;j>z-f-1;j--){
				printf("%c",a[j]);
			}
			for(int j=z;j<z+ff;j++){
				printf("%c",a[j]);
			}
			ff=0;
		}
	}
	return 0;
}
