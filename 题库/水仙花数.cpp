#include<stdio.h>
int main(){       
    int a,b,c,d,i;
    scanf("%d %3d",&i,&d);
	for(i;i<d;i++){
			a=i/100;
			b=(i-a*100)/10;
			c=i-a*100-b*10;
		if(i==a*a*a+b*b*b+c*c*c){
			printf("%d\n",i);
			goto T;
		       }
	}
		printf("No!");
	T:
		i=++i;
	for(i;i<d;i++){
			a=i/100;
			b=(i-a*100)/10;
			c=i-a*100-b*10;
		if(i==a*a*a+b*b*b+c*c*c){
			printf("%d\n",i);
			continue;
		}
	}
	return 0;
} 
