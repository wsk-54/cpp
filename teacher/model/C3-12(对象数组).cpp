#include<string>
#include<iostream>
using namespace std;

class Box
{
	public:
		Box(int h=10,int w=12,int len=15): height(h),width(w),length(len){ }
			//声明有默认参数的构造函数，用参数初始化表对数据成员初始化
		
		int volume( );

	private:
		int height;
		int width;
		int length;
};

int Box::volume( )
{
	return(height*width*length);
}

int main( )
{ 
	Box a[3]={								 //定义对象数组
				Box(10,12,15),               //调用构造函数Box，提供第1个元素的实参
				Box(15,18,20),               //调用构造函数Box，提供第2个元素的实参
				Box(16,20,26)                //调用构造函数Box，提供第3个元素的实参
			};

	cout<<"volume of a[0] is "<<a[0].volume( )<<endl;   //调用a[0]的volume函数
	cout<<"volume of a[1] is "<<a[1].volume( )<<endl;    //调用a[1] 的volume函数
	cout<<"volume of a[2] is "<<a[2].volume( )<<endl;    //调用a[2] 的volume函数


	Box *pt;                        //定义一个指向Box类对象的指针变量pt
	pt=new Box;                 //在pt中存放了新建对象的起始地址
	//cout<<pt->height;         //输出该对象的height成员
	cout<<pt->volume( );    //调用该对象的volume函数，计算并输出体积

	Box *pt1=new Box(12,15,18);

	return 0;
}
