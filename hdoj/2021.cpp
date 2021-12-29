#include<iostream>

using namespace std;

int main(){
    int n,a,money[6]={100,50,10,5,2,1};
    while(cin>>n && n){
        int num=0;
        for(int i=0;i<n;i++){
            cin>>a;
            for(int j=0;j<6;j++){
                if(a>=money[j]){
                    num+=a/money[j];
                    a=a%money[j];
                }  
            }
        }
    cout<<num<<endl;
    }
    return 0;
}