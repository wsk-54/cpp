#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int n,a;
    while(cin>>n){
        cin>>a;
        int max=a,min=a,sum=a;
        for(int i=1;i<n;i++){
            cin>>a;
            sum+=a;
            if(a>max) max=a;
            if(a<min) min=a;
        }
        cout<<fixed<<setprecision(2)<<1.00*(sum-max-min)/(n-2)<<endl;
    }
    return 0;
}