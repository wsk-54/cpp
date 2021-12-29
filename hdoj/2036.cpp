#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    int n,i;
    while(cin>>n && n){
        double x[n],y[n],s=0;
        for(i=0;i<n;i++){
            cin>>x[i]>>y[i];
        }
        for(i=0;i<n;i++){
            s+=x[i]*y[(i+1)%n]-y[i]*x[(i+1)%n];
        }
        cout<<fixed<<setprecision(1)<<abs(s/2)<<endl;
    }
    return 0;
}