#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int m,n;
    cin>>m;
    while(m--){
        cin>>n;
        double sum=0;
        for(int i=1;i<=n;i++){
            if(i%2==0) sum-=1.00/i;
            if(i%2==1) sum+=1.00/i;
        }
        cout<<fixed<<setprecision(2)<<sum<<endl;
    }
    system("pause");
    return 0;
}