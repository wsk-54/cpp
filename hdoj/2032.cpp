#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,i,j;
    while(cin>>n){
        cout<<1<<endl;
        int a[2][30]={1};
        a[1][0]=1;
        for(i=1;i<n;i++){
            cout<<"1 ";
            for(j=1;j<i;j++){
                a[i%2][j]=a[(i+1)%2][j-1]+a[(i+1)%2][j];
                cout<<a[i%2][j]<<' ';
            }
            a[i%2][i]=1;
            cout<<1<<endl;
        }
        cout<<endl;
    }
}