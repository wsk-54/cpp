#include<iostream>

using namespace std;

int main(){
    int n,i,a,b;
    int64_t c[51]={0,1,2,3};
    for(i=4;i<=51;i++){
        c[i]=c[i-1]+c[i-2];
    }
    cin>>n;
    while(n--){
        cin>>a>>b;
        cout<<c[b-a]<<endl;
    }
    return 0;
}