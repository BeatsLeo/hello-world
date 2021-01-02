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
	cout<<"»¶Ó­Ê¹ÓÃÆåÅÌ"<<endl<<"1.ºÚÆì"<<endl<<"2.°×Æì"<<endl<<"0.½áÊø"<<endl;
	cin>>a;
	if(a==1){
		cout<<"ÇëÊäÈëºÚ×ÓµÄºá×ø±ê :";
		cin>>b;
		cout<<"ÇëÊäÈëºÚ×ÓµÄ×Ý×ø±ê£º";
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
   		cout<<"ÇëÊäÈë°××ÓµÄºá×ø±ê :";
		cin>>d;
		cout<<"ÇëÊäÈë°××ÓµÄ×Ý×ø±ê£º";
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
