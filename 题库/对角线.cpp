#include<iostream>
using namespace std;
int main(){
    int n,m,o;
    cin>>n;
    m=n*(n-3)/2;
    o=m*(m-1)/2-n*(n-3)+n-(n-2)/2;
    cout<<o;
    return 0;
}
