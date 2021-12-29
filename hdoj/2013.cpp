#include<iostream>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        int num=1;
        while(n-->1){
            num=(num+1)*2;
        }
        cout<<num<<endl;
    }
    return 0;
}