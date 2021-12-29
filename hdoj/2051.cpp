#include<iostream>

using namespace std;

void two(int n){
    if(n>1) two(n/2);
    cout<<n%2;
}

int main(){
    int n;
    while(cin>>n){
        two(n);
        cout<<endl;
    }
    return 0;
}