#include<iostream>
using namespace std;
int main(){ 
	while(1){
			cout<<"���������0���ּ��ɿ�ʼ���ּ��㣬����0�˳�����ϵͳ��"<<endl;
	int flag;
	cin>>flag;
	if(flag==0){
		break;
	}
	int m,n;
	cout<<"���뱾�δ����ί�ĸ�����";
	cin>>n;
	int a[n];
	int min=100,max=0;
	for(int i=0;i<n;i++){
		cout<<"�����"<<i+1<<"����ί�Ĵ�֣�"<<endl; 
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
	printf("ȥ��һ����߷֣�ȥ��һ����ͷ֣������εĳɼ�Ϊ��%.2f��\n\n\n",total2);
}
	return 0;
}
