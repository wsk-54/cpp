#include<iostream>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        int count=1,a;
        while(n--){
            cin>>a;
            if(a % 2==1) count*=a;
        }
        cout<<count<<endl;
    }
    return 0;
}