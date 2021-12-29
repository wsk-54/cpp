#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,i,r;
    string jinzhi="0123456789ABCDEF";
    while(cin>>n>>r){
        string s;
        if(n<0){
            n=-n;
            cout<<"-";
        }
        while(n){
            s=jinzhi[n%r]+s;
            n/=r;
        }
        cout<<s<<endl;
    }
    return 0;
}