#include<iostream>
using namespace std;
struct student_info
{
    string name;
    int roll_num;
    int age;
    int marks;
};
int main()
{
    student_info student1;
    cout<<"Enter name of student :";
    cin>>student1.name;
    cout<<"Enter student roll number:";
    cin>>student1.roll_num;
    cout<<"Enter student age :";
    cin>>student1.age;
    cout<<"Enter student marks:";
    cin>>student1.marks;

    cout<<"Student name:"<<student1.name<<endl;
    cout<<"student roll number:"<<student1.roll_num<<endl;
    cout<<"student age :"<<student1.age<<endl;
    cout<<"student marks:"<<student1.marks<<endl;

}