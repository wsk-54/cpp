//#include<string>
#include<iostream>
using namespace std;


class Student                                  //����Student��
{
	public:
		Student(int n,char * na,char s )              //���幹�캯��
			{
				num=n;
				name = new char[strlen(na)+1];
				strcpy(name,na);
				sex=s;
				cout<<num<<"Constructor called."<<endl<<endl;       //����й���Ϣ
			}

		~Student( )                                 //������������
			{
				cout<<"Destructor called."<<num<<endl<<endl;
				delete []name;
			}       //����й���Ϣ

		void display( )                             //�����Ա����
			{
				cout<<"num: "<<num<<endl;
		        cout<<"name:"<<name<<endl;
				cout<<"sex:"<<sex<<endl<<endl;
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
	return 0;
}
