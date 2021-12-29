#include<iostream>
#include<string>

using namespace std;

int main(){
    int i;
    string s,smax="(max)";
    while(cin>>s){
        char max=s[0];
        for(i=1;i<s.length();i++){
            if(s[i]>max) max=s[i];
        }
        for(i=0;i<s.length();i++){
            cout<<s[i];
            if(s[i]==max) cout<<smax; 
        }
        cout<<endl;
    }
    return 0;
}