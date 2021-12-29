#include<iostream>

using namespace std;

int main(){
    int m,n,i,j,sum=0;
    while(cin>>n>>m){
        if(m==0 && n==0) break;
        for(i=1;i<=n;i++){
            for(j=i;j<=n;j++){
                sum=(i+j)*(j-i+1)/2;
                if(sum==m){
                    cout<<"["<<i<<","<<j<<"]"<<endl;
                    cout<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}