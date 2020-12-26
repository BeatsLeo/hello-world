#include<stdio.h>
#include<string.h>
int main(){
	int flag;
	scanf("%d",&flag);
	for(int i=0;i<flag;i++){
    char arr[101];
		scanf("%s",&arr);
		int lenth=strlen(arr);
		int decide=0;
		if(arr[0]=='S'&&arr[1]=='C'&&arr[2]=='U'&&lenth==3){
			printf("YES\n");
		}
    else {
	for(int j=0;j<lenth;j++){
    	if(arr[j]=='S'&&arr[j+1]=='C'&&arr[j+2]=='U'){
    		decide=1;
			for(int m=0;m<j;m++){
    			if(arr[m]!='A'){
    				decide=0;
				}
			}
    		for(int m=j+3;m<lenth;m++){
    			if(arr[m]!='A'){
    				decide=0;
				}
			}		
		}
	}
	if(decide==1){
		printf("YES\n");
	}
	if(decide==0) {
		printf("NO\n");
	}
}
 }
return 0;
}
