#include<iostream>

using namespace std;

int main(){
    int n,i;
    while(cin>>n && n){
        int time[3][n],max=0;
        for(i=0;i<n;i++){
            cin>>time[0][i]>>time[1][i];
            time[3][i]=time[1][i]-time[0][i];
            
        }
    }
}