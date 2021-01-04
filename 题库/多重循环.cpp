#include<iostream>
using namespace std;
int main(){
	for(int i=0;i<5;i++){
		for(int j=0;j<4-i;j++){
			cout<<" ";
		}
		for(int m=0;m<2*i+1;m++){
			cout<<"*";
		}
		cout<<endl;
	}
	
} 
