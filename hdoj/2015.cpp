#include<iostream>

using namespace std;

int main(){
    int n,m,i;
    while(cin>>n>>m){
        int sum=0;
        for(i=1;i<=n;i++){
            sum+=i*2;
            if(i<n){
                if(i%m==0){
                    cout<<sum/m<<' ';
                    sum=0;
                }
            }
            else{
                if(i%m==0) cout<<sum/m<<endl;
                else cout<<sum/(i%m)<<endl;
            }
        }
    }
    return 0;
}