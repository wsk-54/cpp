#include<iostream>

using namespace std;

int main(){
    int n,i,a[55]={0,1,2,3,4};
    while(cin>>n){
        if(n==0) break;
        for(i=5;i<=n;i++){
            a[i]=a[i-1]+a[i-3];
        }
        cout<<a[n]<<endl;
    }
    return 0;
}