#include<iostream>

using namespace std;

int main(){
    int n,m,i,j;
    while(cin>>n>>m){
        if(m==0 && n==0) break;
        int a[n],b,c[n],count=n;
        for(i=0;i<n;i++){
            cin>>a[i];
            c[i]=1;
        }
        for(i=0;i<m;i++){
            cin>>b;
            for(j=0;j<n;j++){
                if(a[j]==b){
                    c[j]=0;
                    count--;
                }
            }
        }
        if (count==0) cout<<"NULL";
        else{
            for(i=0;i<n;i++){
                if(c[i]==1) cout<<a[i]<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}