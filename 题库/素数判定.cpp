#include<iostream>
using namespace std;
int main(){
	int n,m,x,y;
	while(1){
		Y: 
			cin>>x>>y;
			if(x==0&&y==0){
				break;
			}
	for(x,y;x<=y;x++){
	    m=x*x+x+41;
	    for(int i=2;i<m;i++){
	    	if(m%i==0){
		cout<<"Sorry"<<endl;
		goto Y;
			}
		}
	}
	cout<<"OK"<<endl;
            } 
return 0;

}
