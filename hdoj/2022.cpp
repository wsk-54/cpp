#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int m,n,i,j;
    while(cin>>m>>n){
        int mm[m][n],max=0,maxx,maxy;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                cin>>mm[i][j];
                if(abs(mm[i][j])>max){
                    max=abs(mm[i][j]);
                    maxx=i;
                    maxy=j;
                }
            }
        }
        cout<<maxx+1<<' '<<maxy+1<<' '<<mm[maxx][maxy]<<endl;
    }
    return 0;
}