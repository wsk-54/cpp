#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,i;
    string s;
    cin>>n;
    getline(cin, s);
    while(n--){
        string a="yes";
        getline(cin,s);
        for(i=0;i<s.length()/2+1;i++){
            if(s[i]!=s[s.length()-i-1]){
                a="no";
                break;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}