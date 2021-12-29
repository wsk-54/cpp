#include<iostream>
#include<string>

using namespace std;

//必须使用double，int就不能ac
int main(){
    int n;
    cin>>n;
    while(n--){
        double a,b,c;
        string s="NO";
        cin>>a>>b>>c;
        if(a+b>c && a+c>b && b+c>a) s="YES";
        cout<<s<<endl;
    }
    return 0;
}