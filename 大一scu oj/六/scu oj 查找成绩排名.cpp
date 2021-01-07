#include<stdio.h>
#include<string.h>
int main(){
	struct st{
		char name[20];
		char id[20];
		char grade[4];
		int G=0,R=0,rank=0;
	};
	int n;
	char seek[20];
	scanf("%d %s",&n,&seek);
	struct st a[n];
	for(int i=0;i<n;i++){
		scanf("%s",a[i].name);
		scanf("%s",a[i].id);
		scanf("%s",a[i].grade);
	}
	for(int i=0;i<n;i++){
		if(a[i].grade[0]=='n'&&a[i].grade[1]=='/'&&a[i].grade[2]=='a'){
			a[i].G=-1;
			a[i].rank=-1;
		}
		else{
			int l=strlen(a[i].grade);
			for(int j=0;j<l;j++){
				a[i].G=a[i].G*10+a[i].grade[j]-'0';
				a[i].rank=a[i].rank*10+a[i].grade[j]-'0';
			}
		}
	}
	int tem;
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=i;j--){
		    if(a[j].rank>a[j-1].rank&&j-1>=0){
		    	tem=a[j].rank;
		    	a[j].rank=a[j-1].rank;
		    	a[j-1].rank=tem;
			}
		}
	}
	int m1=0,m2=0,m3=0;
	for(int j=0;j<n;j++){
	    for(int i=0;i<n;i++){
	    	T:
		if(a[m1].rank==a[m1-1].rank&&m1!=0){
			m1++;
			goto T;
		}
		if(a[i].G==a[m1].rank){
			a[i].R=m3+1;
			m2++;
		    }
	    }
	    m3=m2;
	    m1++;
	}
int L=strlen(seek);
	if(seek[0]>='A'&&seek[0]<='z'&&seek[1]!='/'){
		for(int i=0;i<n;i++){
			int f=0;
			int k=0;
			int LL=strlen(a[i].name);
			for(int j=0;j<L;j++){
			if(a[i].name[k]==seek[j]){
				k++;
				if(j==L-1){
					f=1;
					break;
				}
				continue;
			}
			k++;
			j=-1;
			if(k==LL){break;}
		}
			if(f){
				if(a[i].grade[1]!='/'){
				printf("%s %s %s %d\n",a[i].name,a[i].id,a[i].grade,a[i].R);
			}
			else{
			printf("%s %s %s n/a\n",a[i].name,a[i].id,a[i].grade);	
			}
			}
    }
}
    else if(L<3&&seek[L-1]!='x'||(L==3&&seek[2]=='0')||seek[1]=='/'){
		for(int i=0;i<n;i++){
			int f=0;
			int k=0;
			for(int j=0;j<L;j++){
			if(a[i].grade[k]==seek[j]){
				k++;
				if(j==L-1){f=1;};
				continue;
				}
				k++;
				j=-1;
				if(k>3){
					break;
				}
			}
			if(f){
				if(a[i].grade[1]!='/'){
				printf("%s %s %s %d\n",a[i].name,a[i].id,a[i].grade,a[i].R);
			}
			else{
			printf("%s %s %s n/a\n",a[i].name,a[i].id,a[i].grade);	
			}
			}
		}    	
	}
	else {
		for(int i=0;i<n;i++){
			int f=0;
			int k=0;
			int LL=strlen(a[i].id);
			for(int j=0;j<L;j++){
			if(a[i].id[k]==seek[j]){
				k++;
				if(j==L-1){
					f=1;
					break;
				}
				continue;
			}
			k++;
			j=-1;
			if(k==LL+1){break;}
		}
			if(f){
				if(a[i].grade[1]!='/'){
				printf("%s %s %s %d\n",a[i].name,a[i].id,a[i].grade,a[i].R);
			}
			else{
			printf("%s %s %s n/a\n",a[i].name,a[i].id,a[i].grade);	
			}
			}
    }		
	}
	return 0;
}
