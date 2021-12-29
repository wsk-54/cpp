#include<iostream>

using namespace std;

int main(){
    int n,i,a,j;
    while(cin>>n){
        cin>>a;
        int sum=a;
        for(i=1;i<n;i++){
            cin>>a;
            while(a>1){
                for(j=2;j<=n;j++){
                    if(a%j==0){
                        if(sum%j==0) sum/=j;
                        else sum*=j;
                        a/=j;
                        break;
                    }
                }
            }
        }
        cout<<sum<<endl;
    }
}