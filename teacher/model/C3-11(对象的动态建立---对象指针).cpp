//#include<string>
#include<iostream>
using namespace std;


class Student                                  //声明Student类
{
	public:
		Student(int n,char * na,char s )              //定义构造函数
			{
				num=n;
				name = new char[strlen(na)+1];
				strcpy(name,na);
				sex=s;
				cout<<num<<"Constructor called."<<endl<<endl;       //输出有关信息
			}

		~Student( )                                 //定义析构函数
			{
			        Clean();	
			}       

		void display( )                             //定义成员函数
			{
				cout<<"num: "<<num<<endl;
		        cout<<"name:"<<name<<endl;
				cout<<"sex:"<<sex<<endl<<endl;
			}

		void Clean( )                                 //定义析构函数
			{
				cout<<num<<endl<<endl;
				if ( name != NULL)
				delete []name;
		        name = NULL;

			}       

  private:
      int num;
      char * name;
      char sex;
};


int main( )
{
	Student stud1(10010,"Wang",'f');     
	stud1.display( );                            
	Student stud2(10011,"Zh",'m');        
	stud2.display( );  
	
	Student *p;
	p=new Student(1002,"刘俊",35);
	p->display();
	//delete p;



	return 0;
}
