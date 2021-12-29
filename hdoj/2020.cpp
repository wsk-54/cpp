#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        if(n==0) break;
        int i,j,a[n],b;
        for(i=0;i<n;i++){
            cin>>a[i];
            for(j=i;j>0;j--){
                if((abs(a[j]))>abs(a[j-1])){
                    b=a[j-1];
                    a[j-1]=a[j];
                    a[j]=b;
                }
            }
        }
        for(i=0;i<n-1;i++){
            cout<<a[i]<<' ';
        }
        cout<<a[n-1]<<endl;
    }
    return 0;
}