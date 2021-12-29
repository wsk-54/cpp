#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int m,n;
    while(cin>>n>>m){
        int score[n][m],i,j,sumn[m]={0},summ[n],num=n;
        char average[m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>score[i][j];
                summ[i]+=score[i][j];
                sumn[j]+=score[i][j];
            }
        }
        for(i=0;i<n-1;i++){
            cout<<fixed<<setprecision(2)<<1.00*summ[i]/m<<' ';
        }
        cout<<fixed<<setprecision(2)<<1.00*summ[n-1]/m<<endl;
        for(i=0;i<n;i++){
            int f=1;
            for(j=0;j<m;j++){
                if(i==0 && j<m-1) cout<<fixed<<setprecision(2)<<1.00*sumn[j]/n<<' ';
                if(i==0 && j==m-1) cout<<fixed<<setprecision(2)<<1.00*sumn[j]/n<<endl;
                if (score[i][j]<sumn[j]/n && f==1){
                    num--;
                    f=0;
                }
            }
        }
        cout<<num<<endl<<endl;
    }
    return 0;
}