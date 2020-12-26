#include<stdio.h>
int print(int m,int q);
int invert(int m,int l);
int judge(int m);
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int m=0,l=0,z=0;
        scanf("%d",&m);
        l=judge(m);
        printf("%d:\n",m);
        m=invert(m,l);
        int mm;
        for(int j=1;j<=7;j++){
        	mm=m;
        for(int i=0;i<l;i++){
            z=mm%10;
            print(z,j);
            mm/=10;
            if(i<l-1){
            	printf("  ");
			}
        }
        if(j<7){
        printf("\n");
    }
    }
    printf("\n");
    }
return 0;
}
int judge(int m){
    int n=1,f=m;
    while(f/=10){
        n++;
    }
    return n;
}
int invert(int m,int l){
	int n;
	for(int i=0;i<l;i++){
	n=n*10+m%10;
	m/=10;
}
	return n;
}
int print(int m,int q){
if(q==1){
if(m!=1&&m!=4){
	printf("*****");
}
if(m==1){
	printf("    *");
}
if(m==4){
	printf("*   *");
}
}
if(q==2||q==3){
	if(m==0||m==4||m==8||m==9){
		printf("*   *"); 
	}
	if(m==1||m==2||m==3||m==7){
		printf("    *"); 
	}
	if(m==5||m==6){
		printf("*    "); 
	}
}
if(q==4){
	if(m!=1&&m!=7&&m!=0){
		printf("*****"); 
	}
	if(m==1||m==7){
		printf("    *");
	}
	if(m==0){
		printf("*   *"); 
	}
}
if(q==5||q==6){
	if(m==0||m==6||m==8){
		printf("*   *"); 
	}
	if(m==1||m==3||m==4||m==5||m==7|m==9){
		printf("    *");
	}
	if(m==2){
		printf("*    "); 
	}
}
if(q==7){
	if(m!=1&&m!=4&&m!=7){
		printf("*****"); 
	}
	else{
		printf("    *"); 
	}
}
    return 0;
}
