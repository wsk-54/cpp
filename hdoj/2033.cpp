#include<iostream>

using namespace std;

int main(){
    int n,i,ah,am,as,bh,bm,bs;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>ah>>am>>as>>bh>>bm>>bs;
        int hour=ah+bh,minute=am+bm,second=as+bs;
        if(second>=60){
            second-=60;
            minute++;
        }
        if(minute>=60){
            minute-=60;
            hour++;
        }
        cout<<hour<<' '<<minute<<' '<<second<<endl;
    }
    return 0;
}