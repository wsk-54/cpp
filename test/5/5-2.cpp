#include<iostream>
#include<string>

using namespace std;

class CEmployee
{
protected:
    string name;
    string sex;
    int number;
    int wages;
public:

};

class CManager:public CEmployee
{
protected:
    int static_;
};

class CTechnician:public CEmployee
{
protected:
    int hour;
    int hour_pay;
};

class CSaleman
{
protected:
    int sale;
};

class CSales_manager:public CManager,public CSaleman
{

};