#include<stdio.h>
int main(){
	int m;
	scanf("%d",&m);
	     /*指令输入*/
		 int iins[m+1]={NULL}; 
	char ins[m+1]={NULL};
	for(int i=0;i<m;i++){
		scanf("%d%c",&iins[i],&ins[i]);
	}
	for(int i=0;i<m;i++){
		if(ins[i]=='\n'||ins[i]==' '){
			ins[i]='+';
		}
	}
	    /*找出最大值*/ 
	int max1=0,max2=0;
	for(int i=0;i<m;i++){
		if(max1<iins[i]&&iins[i]>0){
			max1=iins[i];
		}
		if(max2>iins[i]&&iins[i]<0){
			max2=iins[i];
		}
	}
	    /*制表*/
	char table[max1-max2+1][m+1]={NULL};
	for(int i=0;i<max1-max2+1;i++){
		for(int j=0;j<m+1;j++){
			table[i][j]=' ';
		}
	}
	     /*制x轴*/
	     for(int i=0;i<m;i++){
	     	table[max1][i]='-';
		 }
	    /*画表*/
	    for(int i=0;i<m;i++){
	    	if(iins[i]>0){
	    	for(int j=max1-1;j>=max1-iins[i];j--){
	    		table[j][i]=ins[i];
			}
		}
		    if(iins[i]<0){
		    	for(int j=max1+1;j<=max1-iins[i];j++){
		    		table[j][i]=ins[i];
				}
			}
		}
		/*打印*/
		for(int j=0;j<(max1-max2+1);j++){
		if(j==max1){
			for(int i=0;i<m-1;i++){
			printf("%c-",table[j][i]);
		}
		printf("-");
		}
		else{
	for(int i=0;i<m;i++){
			printf("%c ",table[j][i]);
	}
}
		printf("\n"); 
	}
	return 0;
}
