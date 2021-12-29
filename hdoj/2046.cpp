#include<iostream>

using namespace std;

int main(){
    int64_t a[51]={1,1,2,3};
    int n,i;
    while(cin>>n){
        for(i=4;i<=n;i++){
            a[i]=a[i-1]+a[i-2];
        }
        cout<<a[n]<<endl;
    }
    return 0;
}

//斐波那契