#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double x[8],y[8],a,b,c,d;
    while(cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>x[3]>>y[3]){
        x[4]=x[0]<x[1]? x[0]:x[1];
        x[5]=x[0]<x[1]? x[1]:x[0];
        y[4]=y[0]<y[1]? y[0]:y[1];
        y[5]=y[0]<y[1]? y[1]:y[0];
        x[6]=x[2]<x[3]? x[2]:x[3];
        x[7]=x[2]<x[3]? x[3]:x[2];
        y[6]=y[2]<y[3]? y[2]:y[3];
        y[7]=y[2]<y[3]? y[3]:y[2];
        a=x[4]>x[6]? x[4]:x[6];
        b=x[5]<x[7]? x[5]:x[7];
        c=y[4]>y[6]? y[4]:y[6];
        d=y[5]<y[7]? y[5]:y[7];
        if(b<a || d<c) cout<<"0.00"<<endl;
        else cout<<fixed<<setprecision(2)<<(b-a)*(d-c)<<endl;
    }
    return 0;
}