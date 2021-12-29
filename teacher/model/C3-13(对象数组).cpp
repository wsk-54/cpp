#include<string>
#include<iostream>
using namespace std;

class Point
{
	public:
		Point()
			{
				x=y=0;
				cout<<"constructor 1"<<endl;
			}
    
		Point(int xx, int yy)
			{
				x=xx;
				y=yy; 
				cout<<"constructor 2"<<endl;}
   
		~Point()
			{
				cout<<"destructor"<<endl;
			}
    
		int GetX() {return x;}
		
		int GetY() {return y;}
   
		void Move(int X, int Y) {x=X;y=Y; }

	private:
		int x,y;
};


int main()
{
	Point *Ptr=new Point[2];
	//创建对象数组
	Ptr[0].Move(5,10);
	//通过指针访问数组元素的成员
	Ptr[1].Move(15,20);
	cout<<"delete..."<<endl;
	delete [ ] Ptr;
	//删除整个对象数组
	return 0;
}
