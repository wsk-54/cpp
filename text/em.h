#include <iostream>

using namespace std;

class CEmp
{
protected:
    char *m_strName;
    int m_iName;
    int m_iNum; //不知道为啥没有
    float m_fPay;

public:
    CEmp();
    ~CEmp();
    void Pay();
};

class CTec : public CEmp
{
protected:
    int m_iHour;
    int m_iRate;

public:
    CTec();
    ~CTec();
    void Pay();
};

class CSale : virtual public CEmp
{
protected:
    int m_iSale;
    float m_fRate;

public:
    CSale();
    ~CSale();
    void Pay();
};

class CMan : virtual public CEmp
{
protected:
    int m_iMonth;

public:
    CMan();
    ~CMan();
    void Pay();
};

class CSM : public CSale, public CMan
{
public:
    CSM();
    ~CSM();
    void Pay();
};