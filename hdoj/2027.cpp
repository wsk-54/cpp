#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,i;
    string s,yuanyin="aeiou";
    cin>>n;
    getline(cin, s);
    while(n--){
        getline(cin,s);
        int a[5]={0};
        for(i=0;i<s.length();i++){
            switch(s[i]){
                case 'a': a[0]++;break;
                case 'e': a[1]++;break;
                case 'i': a[2]++;break;
                case 'o': a[3]++;break;
                case 'u': a[4]++;break;
            }
        }
        for(i=0;i<5;i++){
            cout<<yuanyin[i]<<':'<<a[i]<<endl;
        }
        if(n>0) cout<<endl;
    }
    system("pause");
    return 0;
}