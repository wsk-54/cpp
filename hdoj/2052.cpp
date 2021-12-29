#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,m,i;
    while(cin>>n>>m){
        string s1="+",s2="|";
        for(i=1;i<=n;i++){
            s1+="-";
            s2+=" ";
        }
        s1+="+";
        s2+="|";
        cout<<s1<<endl;
        for(i=0;i<m;i++){
            cout<<s2<<endl;
        }
        cout<<s1<<endl;
        cout<<endl;
    }
    return 0;
}