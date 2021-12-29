#include<iostream>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        if(n==0) continue;
        int fu=0,zheng=0,ling=0;
        double a;
        while(n--){
            cin>>a;
            if(a==0) ling++;
            if(a>0) zheng++;
            if(a<0) fu++;
        }
        cout<<fu<<' '<<ling<<' '<<zheng<<endl;
    }
    return 0;
}