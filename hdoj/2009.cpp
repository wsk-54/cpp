#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    int n,m;
    while(cin>>n>>m){
        double sum=n,count=n;
        for(int i=1;i<m;i++){
            count=sqrt(count);
            sum+=count;
        }
        cout<<fixed<<setprecision(2)<<sum<<endl;
    }
    return 0;
}