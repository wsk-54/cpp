#include<em.h>
#include<string.h>
#include<iostream>

CEmp::CEmp(){
    char Na[50];
    cout<<"qing shuru xingming";
    cin>>Na;
    m_strName=new char[strlen(Na)+1];
    strcpy(m_strName,Na);
    cout<<"qing shuru gonghao";
    cin>>m_iNum;
    m_fPay=0;
}

CEmp::~CEmp(){
    if(m_strName!=NULL){
        delete []m_strName;
        m_strName=NULL;
    }
}

void CEmp::Pay(){

}

CTec::CTec(){
    m_iHour=0;
    m_iRate=220;
}

CTec::~CTec(){}

void CTec::Pay(){
    cout<<"qing shuru gongzuo xiaoshi shuliang";
    cin>>m_iHour;
    cout<<m_strName
        <<":"
        <<m_iNum
        <<"==="
        <<(m_iHour*m_iRate)
        <<endl;
}

CSale::CSale(){
    m_iSale=0;
    m_fRate=0.025;
}

CSale::~CSale(){}

void CSale::Pay(){
    cout<<"qing shuru xiaoshou shuliang";
    cin>>m_iSale;
    
    cout<<m_strName
        <<":"
        <<m_iNum
        <<"==="
        <<(m_iSale*m_fRate)
        <<endl;
}

CMan::CMan(){
    m_iMonth=5000;
}

CMan::~CMan(){}

void CMan::Pay(){
    cout<<m_strName
        <<":"
        <<m_iNum
        <<"==="
        <<m_iMonth
        <<endl;
}

CSM::CSM(){

}

CSM::~CSM(){
}

void CSM::Pay(){
    cout<<"qing shuru xiaoshou shuliang";
    cin>>m_iSale;
    cout<<m_strName
        <<""
        <<
        <<;
}