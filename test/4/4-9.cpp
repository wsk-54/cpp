#include<iostream>
#include<string>

using namespace std;

class Teacher{
protected:
    string name;
    int age;
    string sex;
    string address;
    string number;
    string title;
public:
    Teacher(string n,int a,string s,string add,string num,string t):
    name(n),age(a),sex(s),address(add),number(num),title(t){}
    void display();
};

void Teacher::display(){
    cout<<"name:"<<name<<endl
        <<"age:"<<age<<endl
        <<"sex:"<<sex<<endl
        <<"address:"<<address<<endl
        <<"number:"<<number<<endl
        <<"title:"<<title<<endl;
}

class Cadre{
protected:
    string name;
    int age;
    string sex;
    string address;
    string number;
    string post;
public:
    Cadre(string n,int a,string s,string add,string num, string p) :
    name(n),age(a),sex(s),address(add),number(num),post(p){}
};

class Teacher_Cadre:public Teacher,public Cadre{
private:
    int wages;
public:
    Teacher_Cadre(string n,int a,string s,string add,string num,string t,string p,int w):
    Teacher(n,a,s,add,num,t),Cadre(n,a,s,add,num,p),wages(w){}
    void show();
};

void Teacher_Cadre::show(){
    Teacher::display();
    cout<<"post:"<<Cadre::post<<endl
        <<"wages:"<<wages<<endl;
}

int main(){
    Teacher_Cadre tc("xiaochen",20,"Ů",
                    "everywhere","13303040220",
                    "student","monitor",100);
    tc.show();
    system("pause");
}