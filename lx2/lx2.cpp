#include<shape.h>
#include<iostream>

using namespace std;

int main(){
    Circle c1(5.3);
    Rectangle r1(3.3,4.4);
    Shape *p;
    p=&c1;
    cout<<p->Area();
    p->Name();
    return 0;
}