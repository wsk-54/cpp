#include<iostream>

using namespace std;

class Cuboid
{
public:
    Cuboid(int newL,int newW,int newH):length(newL),width(newW),height(newH)
    {}
    void volume(){
        cout<<length*width*height<<endl;
    };
private:
    int length,width,height;
};

int main(){
    int l,w,h;
    for(int i=0;i<3;i++){
        cin>>l>>w>>h;
        Cuboid x(l,w,h);
        x.volume();
    }
    system("pause");
}