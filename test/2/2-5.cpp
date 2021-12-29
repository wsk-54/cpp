#include <iostream>

using namespace std;

class Student
{
public:
    Student(int x, int s) : number(x), score(s){}
    void display()
    {
        cout << number << " " << score << endl;
    }
    static void max(Student *);
private:
    int number, score;
};

void Student::max(Student *p){
    int i,max=0;
    int maxl=0;
    for(i=0;i<5;i++){
        if(max<p[i].score){
            max=p[i].score;
            maxl=i; 
        }
    }
    cout<<"number:"<<p[maxl].number<<endl;
}

int main()
{
    Student stud[5]={
        Student(1,10),
        Student(2,20),
        Student(3,30),
        Student(4,40),
        Student(5,50)};
    Student::max(stud);
    system("pause");
}