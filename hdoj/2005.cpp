#include<iostream>

using namespace std;

int main(){
    int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int y,m,d;
    char a;
    while(cin>>y>>a>>m>>a>>d){
        int flag=0,sum=d;
        if((y%400==0) || (y%4==0 && y%100!=0)) flag=1;
        if(m>2) sum+=flag;
        for(int i=0;i<m-1;i++){
            sum+=day[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}