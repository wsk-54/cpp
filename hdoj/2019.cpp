#include<iostream>

using namespace std;

int main(){
    int n,m,a;
    while(cin>>n>>m){
        int f=1;
        if(n==0 && m==0) break;
        cin>>a;
        if(m<a){
            cout<<m<<' '<<a;
            f=0;
        }
        else cout<<a;
        for(int i=1;i<n;i++){
            cin>>a;
            if(m<a && f==1){
                f=0;
                cout<<' '<<m;
            }
            cout<<' '<<a;
        }
        cout<<endl;
    }
    return 0;
}