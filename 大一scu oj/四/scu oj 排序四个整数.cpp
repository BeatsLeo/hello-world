#include<stdio.h>
#include<iostream>
using namespace std;
int com(int *a,int *b,int *c,int *d);
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        com(&a,&b,&c,&d);
        if (!(a>=b&&b>=c&&c>=d)){
        	 com(&a,&b,&c,&d);
		}
	    if (!(a>=b&&b>=c&&c>=d)){
        	 com(&a,&b,&c,&d);
		}
        if (!(a>=b&&b>=c&&c>=d)){
        	 com(&a,&b,&c,&d);
		}
        printf("%d %d %d %d\n",d,c,b,a);
}
return 0;
}
int com(int *a,int *b,int *c,int *d){
    int m=0;
    if(*a<=*b){
        m=*b;
        *b=*a;
        *a=m;
    }
    if(*b<=*c){
        m=*b;
        *b=*c;
        *c=m;
    }
    if(*c<=*d){
        m=*d;
        *d=*c;
        *c=m;
    }
        return 0;
}
