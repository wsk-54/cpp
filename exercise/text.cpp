#include<iostream>

using namespace std;

class A
{
public:
    void Show() { cout << "A"; }
};

class B : public A
{
public:
    void Show() { cout << "B"; }
};

int main()
{
    B b;
    A *p = &b;
    p->Show();
    system("pause");
}
