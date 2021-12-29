#include<iostream>

using namespace std;

int main(){
    int a,b,i,n;
    while(cin>>a>>b){
        if(a==0 && b==0) break;
        n=a%1000;
        for(i=1;i<b;i++){
            n*=a%1000;
            n%=1000;
        }
        cout<<n<<endl;
    }
    return 0;
}