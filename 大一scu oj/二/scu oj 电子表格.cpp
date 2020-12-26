#include<iostream>
using namespace std;
int main(){
	int r,c;
	cin>>c>>r;
	char table[51][51]={NULL};
             /*制表*/
	for(int i=0;i<c;i++){
	   for(int j=0;j<r;j++){
	   	cin>>table[i][j];
	   }
	}
	       /*指令输入*/
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		char com[3]={0};
		int a=0,b=0;
		cin>>com[0]>>com[1]>>a;
		if(com[0]=='S'&&com[1]=='R'){
		cin>>b;
			char tem1[r+1]={NULL};
			for(int x=0;x<r;x++){
				tem1[x]=table[a-1][x];
				table[a-1][x]=table[b-1][x];
				table[b-1][x]=tem1[x];
			}
		}
		if(com[0]=='S'&&com[1]=='C'){
			cin>>b;
			char tem2[c+1]={NULL};
			for(int x=0;x<c;x++){
				tem2[x]=table[x][a-1];
				table[x][a-1]=table[x][b-1];
				table[x][b-1]=tem2[x];
			}
		}
		if(com[0]=='D'&&com[1]=='R'){
        for(int y=a;y<c;y++){
			for(int x=0;x<r;x++){
				table[y-1][x]=table[y][x];
		        table[y][x]={NULL};
			}
		}
	            c=c-1;
	}
		if(com[0]=='D'&&com[1]=='C'){
        for(int y=a;y<r;y++){
			for(int x=0;x<c;x++){
				table[x][y-1]=table[x][y];
				table[x][y]={NULL};
			}
		}
		       r=r-1;
	}
	       if(com[0]=='I'&&com[1]=='R'){
	       	for(int y=c;y>=a;y--){
	       		for(int x=0;x<r;x++){
	       			table[y][x]=table[y-1][x];
	       			table[y-1][x]='0';
				   }
			   }
			   c+=1;
		   }
	       if(com[0]=='I'&&com[1]=='C'){
	       	for(int y=r;y>=a;y--){
	       		for(int x=0;x<r;x++){
	       			table[x][y]=table[x][y-1];
	       			table[x][y-1]='0';
				   }
			   }
		      r+=1;
		   }
	}
	      /*表格打印*/
	for(int i=0;i<c;i++){
	   for(int j=0;j<r;j++){
	   	cout<<table[i][j]<<" ";
	   }
	   cout<<endl;
	}
	return 0;
}
