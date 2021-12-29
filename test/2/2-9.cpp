#include<iostream>

using namespace std;

class Shop{
public:
    Shop(int num1,int q,int p):num(num1),quantity(q),price(p)
    {
        n+=num;
        if(num<10) sum+=num*p;
        else sum+=num*p*discount;
    }
    static void average(){
        aver=sum/n;
    }
    static void display(){
        cout<<sum<<"   "<<aver<<endl;;
    }
private:
    int num,quantity;
    double price;
    static int n;
    static double discount,sum,aver; 
};

double Shop::discount=0.98,Shop::sum=0,Shop::aver=0;
int Shop::n=0;

int main(){
    Shop a[3]={
        Shop(101,5,23.5),
        Shop(102,12,24.56),
        Shop(103,100,21.5)
    };
    Shop::average();
    Shop::display();
    system("pause");
}