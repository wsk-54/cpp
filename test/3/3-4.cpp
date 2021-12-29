#include<iostream>

using namespace std;

class Matrix{
public:
    Matrix(){};
    Matrix(int a[2][3]){
        int i,j;
        for(i=0;i<2;i++){
            for(j=0;j<3;j++){
                m[i][j]=a[i][j];
            }
        }
    };
    void display(){
        int i,j;
        for(i=0;i<2;i++){
            for(j=0;j<3;j++){
                cout<<m[i][j]<<' ';
            }
            cout<<endl;
        }
    }
    Matrix operator+(Matrix &);
private:
    int m[2][3];
};

Matrix Matrix::operator+(Matrix &a){
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            m[i][j]+=a.m[i][j];
        }
    }
    return Matrix(m);
}

int main(){
    int a[2][3]={
        {1,2,3},
        {4,5,6}
    },b[2][3]={
        {6,5,4},
        {3,2,1}
    };
    Matrix m1(a),m2(b),m3;
    m3=m1+m2;
    m3.display();
    system("pause");
}
