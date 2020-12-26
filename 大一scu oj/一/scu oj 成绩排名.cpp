#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	char name[n][11];
	char number[n][19];
	char score[n][4];
	for(int i=0;i<n;i++){
		scanf("%s",&name[i]);
		scanf("%s",&number[i]);
	    scanf("%s",&score[i]);
}
    int m=0,min=0,max=0,l=10000;
    for(int i=0;i<n;i++){
    if(score[i][0]=='n'&&score[i][1]=='/'&&score[i][2]=='a'){
    	continue;
	}
	if(((score[i][0])*100+(score[i][1])*10+score[i][2])>=m){
		m=(score[i][0])*100+(score[i][1])*10+score[i][2];
		max=i;
	}
	if(((score[i][0])*100+(score[i][1])*10+score[i][2])<=l){
		l=(score[i][0])*100+(score[i][1])*10+score[i][2];
		min=i;
	 }
	}
	int people_max[n];
	int people_min[n];
	int p1=0,p2=0;
	for(int j=0;j<n;j++){
		if(((score[j][0])*100+(score[j][1])*10+score[j][2])==((score[min][0])*100+(score[min][1])*10+score[min][2])){
			people_min[p1]=j;
			p1++;
		}
		if(((score[j][0])*100+(score[j][1])*10+score[j][2])==((score[max][0])*100+(score[max][1])*10+score[max][2])){
			people_max[p2]=j;
		    p2++;
		}
	}
		int flag1=min;
	if(p1>1){
		(strcmp(name[people_min[0]],name[people_min[1]])>0)?flag1=people_min[0]:flag1=people_min[1];
      for(int j=0;j<p1;j++){
      	if((strcmp(name[flag1],name[people_min[j]]))<0){
      		flag1=people_min[j];
		  }
	  }
}
 		int flag4=max;
    if(p2>2){
		(strcmp(name[people_max[0]],name[people_max[1]])<0)?flag4=people_max[0]:flag4=people_max[1];
      for(int j=0;j<p2;j++){
      	if((strcmp(name[flag4],name[people_max[j]]))>0){
      		flag4=people_max[j];
		  }
	  }
	}
	printf("%s %s\n",name[flag4],number[flag4]);
    printf("%s %s\n",name[flag1],number[flag1]);
	return 0;
}
