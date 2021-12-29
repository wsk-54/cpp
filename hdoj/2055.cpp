#include<iostream>

using namespace std;

int main(){
    char x;
    int y,n,x1;
    cin>>n;
    while(n--){
        cin>>x>>y;
        if(x>='A' && x<='Z') x1=(int)x-64;
        else x1=((int)x-96)*-1;
        cout<<x1+y<<endl;
    }
    return 0;
}

//a-97 A-65