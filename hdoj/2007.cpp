#include<iostream>

using namespace std;

int main(){
    int x,y,i;
    while(cin>>x>>y){
        if(x>y){i=x;x=y;y=i;}
        int ji=0,ou=0;
        for(i=x;i<=y;i++){
            if(i%2==0) ji+=i*i;
            if(i%2==1) ou+=i*i*i; 
        }
        cout<<ji<<' '<<ou<<endl;
    }
    return 0;
}