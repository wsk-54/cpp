#include<iostream>

using namespace std;

int qinhe(int x){
    int i,sum=1;
    for(i=2;i*i<=x;i++){
        if(x%i==0){
            sum+=i+x/i;
            if(i==x/i) sum-=i;
        }
    }
    return sum;
}

int main(){
    int n,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a==qinhe(b) && b==qinhe(a)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}