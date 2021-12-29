#include<iostream>

using namespace std;

int main(){
    int n,m,i,a[42]={0,0,1,2};
    cin>>n;
    while(n--){
        cin>>m;
        for(i=4;i<=m;i++){
            a[i]=a[i-1]+a[i-2];
        }
        cout<<a[m]<<endl;
    }
    return 0;
}

//斐波那契