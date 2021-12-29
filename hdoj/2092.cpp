#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main(){
    int n,m,i;
    while(cin>>n>>m){
        int nflag=1,mflag=1;
        string s="No";
        if(n==0 && m==0) break;
        if(m==0){
            cout<<"Yes"<<endl;
            continue;
        }
        if(n==0){
            if(pow(sqrt(abs(m)),2)==m) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
            continue;
        }
        if(n<0){
            nflag=-1;
            if(m>0) mflag=-1;
        }
        if(m<0) nflag=-1;
        for(i=1;i<abs(m);i++){
            if(abs(m)%i==0){
                if(i*nflag+mflag*abs(m/i)==n){
                    s="Yes";
                    break;
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}