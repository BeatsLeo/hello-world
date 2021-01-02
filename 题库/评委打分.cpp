#include<iostream>
using namespace std;
int main(){ 
	while(1){
			cout<<"输入任意非0数字即可开始评分计算，输入0退出评分系统。"<<endl;
	int flag;
	cin>>flag;
	if(flag==0){
		break;
	}
	int m,n;
	cout<<"输入本次打分评委的个数：";
	cin>>n;
	int a[n];
	int min=100,max=0;
	for(int i=0;i<n;i++){
		cout<<"输入第"<<i+1<<"个评委的打分："<<endl; 
		cin>>m;
		a[i]=m;
		m=NULL;
	}
	for(int j=0;j<n;j++){
		if(a[j]>max){
			max=a[j];
		}
	}
			for(int k=0;k<n;k++){
		if(a[k]<min){
			min=a[k];
		}
	}
	float total1=0,total2=0;
	for(int l=0;l<n;l++){
	total1+=a[l];	
	}
	total2=(total1 - max - min)/(n-2);
	printf("去掉一个最高分，去掉一个最低分，您本次的成绩为：%.2f分\n\n\n",total2);
}
	return 0;
}
