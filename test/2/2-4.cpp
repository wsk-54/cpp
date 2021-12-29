#include<iostream>

using namespace std;

class Student{
public:
    Student(int x,int s):number(x),score(s)
    {}
    void display(){
        cout<<number<<" "<<score<<endl;
    }
private:
    int number,score;
};

int main(){
    Student stud[5] = {
        Student(1, 1),
        Student(2, 2),
        Student(3, 3),
        Student(4, 4),
        Student(5, 5)};
    Student *p=&stud[0];
    p[0].display();
    p[2].display();
    p[4].display();
    system("pause");
}