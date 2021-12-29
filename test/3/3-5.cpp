#include <iostream>

using namespace std;

class Matrix{
public:
    Matrix operator+(Matrix &);
    friend ostream & operator<<(ostream &,Matrix &);
    friend istream & operator>>(istream &,Matrix &);
private:
    int m[2][3];
};

Matrix Matrix::operator+(Matrix &a){
    Matrix c;
    int i,j;
    for (i=0;i<2;i++){
        for (j=0;j<3;j++){
            c.m[i][j]=m[i][j]+a.m[i][j];
        }
    }
    return c;
}

istream & operator>>(istream &in, Matrix &a){
    int i,j;
    cout<<"ÊäÈë¾ØÕó(2x3):"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            in>>a.m[i][j];
        }
    }
    return in;
}

ostream & operator<<(ostream &out, Matrix &a){
    int i,j;
    cout<<"Êä³ö¾ØÕó(2x3):"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            out<<a.m[i][j]<<' ';
        }
        out<<endl;
    }
    return out;
}

int main(){
    Matrix m1,m2,m3;
    cin>>m1;
    cin>>m2;
    m3=m1+m2;
    cout<<m1<<endl;
    cout<<m2<<endl;
    cout<<m3<<endl;
    system("pause");
}