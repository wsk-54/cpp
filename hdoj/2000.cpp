#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    int i,a,j;
    while(cin>>s){
        for(i=0;i<2;i++){
            for(j=i;j<3;j++){
                if(s[i]>s[j]){
                    a=s[i];
                    s[i]=s[j];
                    s[j]=a;
                }
            }
        }
        for(i=0;i<2;i++){
            cout<<s[i]<<' ';
        }
        cout<<s[2]<<endl;
    }
    return 0;
}