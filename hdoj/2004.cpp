#include<iostream>

using namespace std;

int main(){
    int score;
    char judge;
    while(cin>>score){
        if(score>100 || score<0) cout<<"Score is error!"<<endl;
        else{
            switch(score/10){
                case 10: judge='A';break;
                case 9: judge='A';break;
                case 8: judge='B';break;
                case 7: judge='C';break;
                case 6: judge='D';break;
                default: judge='E';break;
            }
            cout << judge << endl;
        }
    }
    return 0;
}