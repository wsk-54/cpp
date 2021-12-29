#include<iostream>

using namespace std;

int main(){
    int m,n;
    while(cin>>m>>n){
        int a,b,c,num=0,i;
        for(i=m;i<=n;i++){
            a=i/100;
            b=(i/10)%10;
            c=i%100%10;
            if(a*a*a+b*b*b+c*c*c==i){
                if(num>0) cout<<' '<<i;
                if(num==0) cout<<i;num++;
            }
        }
        if(num==0) cout<<"no";
        cout<<endl;
    }
    return 0;
}