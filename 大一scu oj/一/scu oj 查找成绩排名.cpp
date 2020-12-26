#include<stdio.h>
#include<string.h>
int sort(char a[][4],int n);
int main(){
	int n;
	char search[19];
	int len=strlen(search);
	scanf("%d %s",&n,&search);
	char name[n][11];
	char number[n][19];
	char score[n][4];
	for(int i=0;i<n;i++){
		scanf("%s",&name[i]);
		scanf("%s",&number[i]);
	    scanf("%s",&score[i]);
}
    int rank[n];
    for(int i=0;i<n;i++){
    	rank[i]=i+1;
	}
    char stda[n][4];
    for(int i=0;i<n;i++){
	stda[i][0],stda[i][1],stda[i][2]=sort(score,n);
}
for(int i=0;i<n;i++){
	printf("%d %d %d\n",stda[i][0],stda[i][1],stda[i][2]);
}
return 0;
 } 
 int sort(char a[][4],int n){
 	static int i=n;
 	static int o=-1;
 	char e[4];
     for(i-1;i>0;i--){
     	if(((a[i][0])*100+(a[i][1])*10+a[i][2])>((a[i-1][0])*100+(a[i-1][1])*10+a[i-1][2])){
     		e[0]=a[i][0],e[1]=a[i][1],e[2]=a[i][2];
     		a[i][0]=a[i-1][0],a[i][1]=a[i-1][1],a[i][2]=a[i-1][2];
			 a[i-1][0]=e[0],a[i-1][1]=e[1],a[i-1][2]=e[2];
		 }
	 }
	 i--;
	 o++;
	  return a[i-1][0],a[i-1][1],a[i-1][2];
 }
