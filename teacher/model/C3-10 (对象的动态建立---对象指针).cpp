#include "iostream.h"
class Time
{
	public:
		Time(int,int,int);
	
	public:	
		int hour;
		int minute;
		int sec;
	public:	
		void get_time( );                //�������г�Ա����
};


Time::Time(int h,int m,int s)
{
	hour=h;
	minute=m;
	sec=s;
}

void Time::get_time( )              //���幫�г�Ա����
{
	cout<<hour<<":"<<minute<<":" <<sec<<endl;
}

int main( )
{
	Time t1(10,13,56);               //����Time�����t1
	int *p1=&t1.hour;                //����ָ���������ݵ�ָ�����p1����ʹp1ָ��t1.hour
	cout<<*p1<<endl;                 //���p1��ָ�����ݳ�Աt1.hour


	t1.get_time( );                   //���ö���t1�ĳ�Ա����get_time
	
	Time *p2=&t1;                    //����ָ��Time������ָ�����p2����ʹp2ָ��t1
	p2->get_time( );                  //����p2��ָ�����(��t1)��get_time����

	
	void (Time::*p3)( );              //����ָ��Time�๫�ó�Ա������ָ�����p3
	p3=&Time::get_time;              //ʹp3ָ��Time�๫�ó�Ա����get_time
	(t1.*p3)( );                   //���ö���t1��p3��ָ�ĳ�Ա����(��t1.get_time( ))

	return 0;
}
