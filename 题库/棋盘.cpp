#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e;
	    	char board[10][10];
    	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
		board[i][j]='#';
		}
	}
	while(1){
	cout<<"��ӭʹ������"<<endl<<"1.����"<<endl<<"2.����"<<endl<<"0.����"<<endl;
	cin>>a;
	if(a==1){
		cout<<"��������ӵĺ����� :";
		cin>>b;
		cout<<"��������ӵ������꣺";
		cin>>c;
	    board[c-1][b-1]='@';
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout<<board[i][j]<<" ";
		}
	cout<<endl;
	}
	}
	if(a==2){
   		cout<<"��������ӵĺ����� :";
		cin>>d;
		cout<<"��������ӵ������꣺";
		cin>>e;
	    board[e-1][d-1]='0';
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout<<board[i][j]<<" ";
		}
	cout<<endl;
	}
	}
    if(a==0){
    	return 0;
	}
}
 }
