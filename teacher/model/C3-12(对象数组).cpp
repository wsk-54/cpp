#include<string>
#include<iostream>
using namespace std;

class Box
{
	public:
		Box(int h=10,int w=12,int len=15): height(h),width(w),length(len){ }
			//������Ĭ�ϲ����Ĺ��캯�����ò�����ʼ��������ݳ�Ա��ʼ��
		
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
	Box a[3]={								 //�����������
				Box(10,12,15),               //���ù��캯��Box���ṩ��1��Ԫ�ص�ʵ��
				Box(15,18,20),               //���ù��캯��Box���ṩ��2��Ԫ�ص�ʵ��
				Box(16,20,26)                //���ù��캯��Box���ṩ��3��Ԫ�ص�ʵ��
			};

	cout<<"volume of a[0] is "<<a[0].volume( )<<endl;   //����a[0]��volume����
	cout<<"volume of a[1] is "<<a[1].volume( )<<endl;    //����a[1] ��volume����
	cout<<"volume of a[2] is "<<a[2].volume( )<<endl;    //����a[2] ��volume����


	Box *pt;                        //����һ��ָ��Box������ָ�����pt
	pt=new Box;                 //��pt�д�����½��������ʼ��ַ
	//cout<<pt->height;         //����ö����height��Ա
	cout<<pt->volume( );    //���øö����volume���������㲢������

	Box *pt1=new Box(12,15,18);

	return 0;
}
