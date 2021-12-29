#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    double x1,x2,y1,y2,a;
    while(cin>>x1>>y1>>x2>>y2){
        a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
        cout<<fixed<<setprecision(2)<<a<<endl;
    }
    return 0;
}