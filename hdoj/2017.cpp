#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,i,j;
    string s;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s;
        int count=0;
        for(j=0;j<s.length();j++){
            if(s[j]>='0' && s[j]<='9') count++;
        }
        cout<<count<<endl;
    }
    return 0;
}