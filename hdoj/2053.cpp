#include<iostream>

using namespace std;

int main(){
    int n,i,j;
    while(cin>>n){
        int a=0;
        for(i=1;i<=n;i++){
            if(n%i==0) a=1-a;
        }
        cout<<a<<endl;
    }
    return 0;
}