#include<iostream>

using namespace std;

int main(){
    int a,n;
    cin>>n;
    while(n--){
        cin>>a;
        int num=3;
        while(a--){
            num=(num-1)*2;
        }
        cout<<num<<endl;
    }
    return 0;
}