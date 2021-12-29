#include<iostream>
#define f(n)(n*n+n+41)

using namespace std;

int isprime(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return 0;
    }
    return 1;
}

int main(){
    int x,y;
    while(cin>>x>>y){
        int f=0;
        if(x==0 && y==0) break;
        for(int i=x;i<=y;i++){
            if(isprime(f(i))==0) f=1;
        }
        if(f==0) cout<<"OK"<<endl;
        else cout << "Sorry" << endl;
    }
    return 0;
}