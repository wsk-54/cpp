#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double x;
    while(cin>>x){
        if(x<0) x*=-1;
        cout<<fixed<<setprecision(2)<<x<<endl;
    }
    return 0;
}