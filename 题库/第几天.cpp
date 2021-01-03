#include<stdio.h>
int main(){
	int a,b,c,d,e,f;
	scanf("%d/%d/%d",&a,&b,&c);
	d=b/2;
	e=(b-2)/2;
	f=(b-7)/2;
    if(a%4==0&&a%100!=0)//ÈòÄê 
	{
    	if(b<=2){	
    		printf("%d",31*d+c);
		}
		else if(2<b&&b<=7){		
		printf("%d",60+30*(b-3)+e+c); 
	        }
	        else{
	        	printf("%d",213+(b-8)*30+c+f);
			}
	    }
	        else {
			if(b<=2){
    		printf("%d",31*d+c);
		}
		else if(2<b&&b<=7){
		printf("%d",59+30*(b-3)+e+c); 
	        }
	        else{
	        	printf("%d",212+(b-8)*30+c+f);
			}	
			}
			int x;
			printf("\n");
			scanf("%d",&x);
			printf("%d",x);
	return 0;
}
