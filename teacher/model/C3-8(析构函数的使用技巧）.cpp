#include<iostream.h>
#include <stdlib.h>
#include <string.h>

class CStudent             //声明类类型Student
{ 
private:
		int num;
		char * name;
		char sex;
public:
		CStudent();
	    CStudent(int n,char * na,char s);              //定义构造函数
		~CStudent();                                 //定义析构函数
		void Display();
		void Clean();

};


CStudent::CStudent( )              //定义构造函数
{
	num=0;
	name = NULL;
	sex='m';
	cout<<num<<"Constructor called."<<endl<<endl;       //输出有关信息
}


CStudent::CStudent(int n,char * na,char s )              //定义构造函数
{
	num=n;
	//name = new char[strlen(na)+1];
	name=(char *)malloc(strlen(na)+1);
    

	strcpy(name,na);
	sex=s;
	cout<<num<<"Constructor called."<<endl<<endl;       //输出有关信息
}

CStudent::~CStudent( )                                 //定义析构函数
{
    Clean();	
}       

void CStudent::Display( )                             //定义成员函数
{
	cout<<"num: "<<num<<endl;
    cout<<"name:"<<name<<endl;
	cout<<"sex:"<<sex<<endl<<endl;
}

void CStudent::Clean( )                                 //定义析构函数
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
	
	
	
	CStudent *p;            //定义指向类类型Student的数据的指针变量

	p=new CStudent(123,"刘俊",'m');         //用new运算符开辟一个存放Student型数据的空间
	//p=(CStudent *）malloc(123,"刘俊",'m'); 
	p->Display();

		if ( p != NULL)
        delete p;
	    p = NULL;

	return 0;
}
	
