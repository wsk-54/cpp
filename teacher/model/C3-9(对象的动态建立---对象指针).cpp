#include<string>
#include<iostream>
using namespace std;


class Student             //����������Student
{ 
	public:
		string name;
		int num;
		char sex;
};

int main( )
{ 
	Student *p;            //����ָ��������Student�����ݵ�ָ�����
	p=new Student;         //��new���������һ�����Student�����ݵĿռ�
	p->name="ahgjfj";            //���������ĳ�Ա��ֵ
	p->num=10123;
	p->sex='m';
	cout<<p->name<<endl<<p->num<<endl<<p->sex<<endl; //�������Ա��ֵ
	delete p;          //�����ÿռ�
	return 0;
}
