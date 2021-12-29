#include<iostream>

using namespace std;

int main(){
    int n,i;
    while(cin>>n){
        if(n==0) break;
        int a[n],min=10000;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<min) min=a[i];
        }
        cout<<min;
        for(i=1;i<n;i++){
            if(a[i]==min) cout<<' '<<a[0];
            else cout<<' '<<a[i];
        }
        cout<<endl;
    }
    return 0;
}