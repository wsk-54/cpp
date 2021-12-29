#include<iostream>
#include<string>

using namespace std;

bool judge(string &s){
    int i,a[4]={0,0,0,0},cout=0;;
    if(s.length()<8 || s.length()>16) return false;
    for(i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z') a[0]=1;
        if(s[i]>='a' && s[i]<='z') a[1]=1;
        if(s[i]>='0' && s[i]<='9') a[2]=1;
        if(s[i]=='~'||s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^') a[3]=1;
    }
    if(a[0]+a[1]+a[2]+a[3]<3) return false;
    return true;
}

int main(){
    string s;
    int m;
    cin>>m;
    while(m--){
        cin>>s;
        if(judge(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}