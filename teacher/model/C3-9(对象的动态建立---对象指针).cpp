#include<string>
#include<iostream>
using namespace std;


class Student             //声明类类型Student
{ 
	public:
		string name;
		int num;
		char sex;
};

int main( )
{ 
	Student *p;            //定义指向类类型Student的数据的指针变量
	p=new Student;         //用new运算符开辟一个存放Student型数据的空间
	p->name="ahgjfj";            //向对象变量的成员赋值
	p->num=10123;
	p->sex='m';
	cout<<p->name<<endl<<p->num<<endl<<p->sex<<endl; //输出各成员的值
	delete p;          //撤销该空间
	return 0;
}
