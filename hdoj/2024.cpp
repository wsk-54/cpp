#include<iostream>
#include<string>

using namespace std;

bool judge(string &s){
    int i;
    if(s[0]>='0' && s[0]<='9') return false;
    for(i=0;i<s.length();i++){
        if((s[i]<'0'||s[i]>'9')&&(s[i]<'a'||s[i]>'z')&&(s[i]<'A'||s[i]>'Z')&&s[i]!='_') return false;
    }
    return true;
}

int main(){
    string s;
    int n,i;
    cin>>n;
    getline(cin, s);
    while(n--){
        getline(cin,s);
        if(judge(s)) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}