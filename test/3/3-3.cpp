#include<iostream>

using namespace std;

class Complex{
public:
    Complex(int r=0,int i=0):real(r),imag(i){}
    Complex operator+(Complex &);
    Complex operator+(int &);
    friend Complex operator+(int &,Complex &);
    void display(){cout<<real<<" "<<imag<<endl;}
private:
    int real;
    int imag;
};

Complex Complex::operator+(Complex &c){
    return Complex(real+c.real,imag+c.imag);
}

Complex Complex::operator+(int &i)
{
    return Complex(real+i,imag);
}

Complex operator+(int &i,Complex &c)
{
    return Complex(c.real+i,c.imag);
}

int main(){
    Complex c1(1,2),c2(2,3),c3(0,0);
    int i=5;
    c3=c1+c2;
    c3.display();
    c3=c1+i;
    c3.display();
    c3=i+c1;
    c3.display();
    system("pause");
}