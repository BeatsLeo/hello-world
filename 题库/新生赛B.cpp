#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	char a[200][11];
	for(int i=0;i<N;i++){
		scanf("%s",&a[i]);
	}
	for(int j=0;j<N;j++){
		printf("6%c%c%c%c%c\n",a[j][6],a[j][7],a[j][8],a[j][9],a[j][10]);
	} 
	return 0;
}
