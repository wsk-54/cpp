#include<iostream.h>
#include <stdlib.h>
#include <string.h>

class CStudent             //����������Student
{ 
private:
		int num;
		char * name;
		char sex;
public:
		CStudent();
	    CStudent(int n,char * na,char s);              //���幹�캯��
		~CStudent();                                 //������������
		void Display();
		void Clean();

};


CStudent::CStudent( )              //���幹�캯��
{
	num=0;
	name = NULL;
	sex='m';
	cout<<num<<"Constructor called."<<endl<<endl;       //����й���Ϣ
}


CStudent::CStudent(int n,char * na,char s )              //���幹�캯��
{
	num=n;
	//name = new char[strlen(na)+1];
	name=(char *)malloc(strlen(na)+1);
    

	strcpy(name,na);
	sex=s;
	cout<<num<<"Constructor called."<<endl<<endl;       //����й���Ϣ
}

CStudent::~CStudent( )                                 //������������
{
    Clean();	
}       

void CStudent::Display( )                             //�����Ա����
{
	cout<<"num: "<<num<<endl;
    cout<<"name:"<<name<<endl;
	cout<<"sex:"<<sex<<endl<<endl;
}

void CStudent::Clean( )                                 //������������
{
	cout<<num<<endl<<endl;
	if ( name != NULL)
	//delete []name;
	free(name);
    name = NULL;

}       

int main( )
{ 
	CStudent stud1(10010,"Wang",'f');     
	stud1.Display( );                            
	CStudent stud2(10011,"Zh",'m');        
	stud2.Display( );   
	
	
	
	CStudent *p;            //����ָ��������Student�����ݵ�ָ�����

	p=new CStudent(123,"����",'m');         //��new���������һ�����Student�����ݵĿռ�
	//p=(CStudent *��malloc(123,"����",'m'); 
	p->Display();

		if ( p != NULL)
        delete p;
	    p = NULL;

	return 0;
}
	
