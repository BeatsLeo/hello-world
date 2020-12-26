#include<stdio.h>
int main(){
	while(1){
	int arr[5];
	int b[5];
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	if(arr[0]==0&&arr[1]==0&&arr[2]==0&&arr[3]==0&&arr[4]==0){
		break;
	}
	if(arr[4]-arr[3]==arr[3]-arr[2]&&arr[3]-arr[2]==arr[2]-arr[1]&&arr[2]-arr[1]==arr[1]-arr[0]){
		printf("case one\n");
		int d=arr[4]-arr[3];
		b[0]=arr[4]+d;
		for(int i=1;i<5;i++){
			b[i]=b[i-1]+d;
		}
		printf("%d %d %d %d %d\n",b[0],b[1],b[2],b[3],b[4]);
	}
	if(arr[4]*arr[2]==arr[3]*arr[3] && arr[3]*arr[1]==arr[2]*arr[2] && arr[2]*arr[0]==arr[1]*arr[1]){
		printf("case two\n");
		int q=arr[4]/arr[3];
		b[0]=arr[4]*q;
        for(int i=1;i<5;i++){
			b[i]=b[i-1]*q;
		}
		printf("%d %d %d %d %d\n",b[0],b[1],b[2],b[3],b[4]);
	}
	if(arr[0]+arr[1]==arr[2]&&arr[1]+arr[2]==arr[3]&&arr[2]+arr[3]==arr[4]){
		printf("case three\n");
		b[0]=arr[3]+arr[4];
		b[1]=arr[4]+b[0];
		for(int i=2;i<5;i++){
			b[i]=b[i-1]+b[i-2];
		}
		printf("%d %d %d %d %d\n",b[0],b[1],b[2],b[3],b[4]);
	}
 }
 return 0;
}
