#include<stdio.h>
#include<string.h>
int main(){
	struct inf{
		char name[20];
		char id[20];
		char grade[5];
	    int G=0;
	};
	int n;
	scanf("%d",&n);
	struct inf st[n];
	for(int i=0;i<n;i++){
		scanf("%s",&st[i].name);
		scanf("%s",&st[i].id);
		scanf("%s",&st[i].grade);
	}
	for(int i=0;i<n;i++){
		if(st[i].grade[0]=='n'&&st[i].grade[1]=='/'&&st[i].grade[2]=='a'){
			st[i].G=-1;
		}
		else{
			int l=strlen(st[i].grade);
			for(int j=0;j<l;j++){
				st[i].G=st[i].G*10+st[i].grade[j]-'0';
			}
		}
	}
	int min=100;
	for(int i=0;i<n;i++){
		if(st[i].G>=0&&st[i].G<min){
			min=st[i].G;
		}
	}
	int max=0;
	for(int i=0;i<n;i++){
		if(st[i].G>max){
			max=st[i].G;
		}
	}
	int M1[n]={0},M2[n]={0},n1,n2;
	char NAME1[20],NAME2[20];
	for(int i=0;i<n;i++){
		if(st[i].G==min){
			M1[i]=1;
			n1=i;
			strcpy(NAME1,st[i].name);
		}
	}
	for(int i=0;i<n;i++){
		if(st[i].G==max){
			M2[i]=1;
			n2=i;
			strcpy(NAME2,st[i].name);
		}
	}
	for(int i=0;i<n;i++){
		if(M1[i]==0) continue;
		else{
			(strcmp(NAME1,st[i].name)>0)?strcpy(NAME1,NAME1):strcpy(NAME1,st[i].name),n1=i; 
		}
	}
	for(int i=0;i<n;i++){
		if(M2[i]==0) continue;
		else{
			(strcmp(NAME2,st[i].name)>0)?strcpy(NAME2,st[i].name):strcpy(NAME2,NAME2),n2=i; 
		}
	}
	printf("%s %s\n",NAME2,st[n2].id);
    printf("%s %s",NAME1,st[n1].id);
return 0;
}

