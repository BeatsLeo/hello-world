#include<stdio.h>
int judge(int *x,int n);
int main(){
 int n=0;
 scanf("%d",&n);
 int a[n+1]={NULL};
 for(int i=0;i<n;i++){
scanf("%d",&a[i]);
 }
 int m=0;
 for(int i=0;i<n;i++){
     if(a[i]==0){
         m=1;
     }
 }
for(int i=0;i<n;i++){
judge(a,i);
}
for(int i=0;i<n;i++){
    if(a[i]!=NULL){
        m++;
    }
}
printf("%d\n",m);
return 0;
}


int judge(int *x,int n){
int f=0,t=x[n];
for(int i=0;i<n;i++){
if(x[i]==t&&i!=n){
    x[i]=0;
}
}
return f;
}
