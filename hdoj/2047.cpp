#include<iostream>

using namespace std;

int main(){
    int n;
    int64_t a[41]={1,3,8};
    for(int i=3;i<=41;i++){
        a[i]=2*(a[i-1]+a[i-2]);
    }
    while(cin>>n){
        cout<<a[n]<<endl;
    }
    return 0;
}