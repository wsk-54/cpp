#include<iostream>

using namespace std;

class Student{
public:
    Student(int n,float s){
        num=n;
        score=s;
    }
    static void change(int n,float s){num=n,score=s;}
    static void display(){cout<<num<<" "<<score<<endl;}
    static void fun(Student &);
private:
    static int num;
    static float score;
};

int Student::num=0;
float Student::score=0;

void Student::fun(Student &s){
    change(s.num,s.score);
    display();
}

int main(){
    Student stud(101,78.5);
    Student::fun(stud);
    Student stud1(101,80.5);
    Student::fun(stud1);
    system("pause");
}