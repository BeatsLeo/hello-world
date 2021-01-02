#include<iostream>
#include<stdio.h> 
using namespace std;
int main(){
	char a[]="1234567890X";
	int b=2;
	if(b=a[1]){
		printf("yyyyy\n");
	}
	char c=b;
	cout<<c<<endl;
	cout<<a[2]<<endl;
	printf("%d",a[2]);
}
