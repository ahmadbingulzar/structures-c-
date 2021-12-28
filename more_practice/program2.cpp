#include<iostream>
using namespace std;
struct student_details
{
    int  roll_number=0;
    string name;
    int age;
};
int main()
{
    student_details student1,student2,student3,student4,student5;
    cout<<"Enter student 1 name :";
    cin>>student1.name;
   student1.roll_number=1;
    cout<<"Enter student 1 age:";
    cin>>student1.age;

    cout<<"Enter student 2 name :";
    cin>>student2.name;
   student2.roll_number=2;
    cout<<"Enter student 2 age:";
    cin>>student2.age;


    cout<<"Enter student 3 name :";
    cin>>student3.name;
    student3.roll_number=3;
    cout<<"Enter student 3 age:";
    cin>>student3.age;


    cout<<"Enter student 4 name :";
    cin>>student4.name;
    student4.roll_number=4;
    cout<<"Enter student 4 age:";
    cin>>student4.age;




    cout<<"Enter student 5 name :";
    cin>>student5.name;
    student5.roll_number=5;
    cout<<"Enter student 5 age:";
    cin>>student5.age;


    cout<<endl;
    cout<<endl;



cout<<"student roll number:"<<student2.roll_number<<endl;
cout<<"student name:"<<student2.name<<endl;
cout<<"student age:"<<student2.age<<endl;

cout<<endl;
cout<<endl;

cout<<"student roll number:"<<student3.roll_number<<endl;
cout<<"student name:"<<student3.name<<endl;
cout<<"student age:"<<student3.age<<endl;

cout<<endl;
cout<<endl;

cout<<"student roll number:"<<student4.roll_number<<endl;
cout<<"student name:"<<student4.name<<endl;
cout<<"student age:"<<student4.age<<endl;

cout<<endl;
cout<<endl;

cout<<"student roll number:"<<student5.roll_number<<endl;
cout<<"student name:"<<student5.name<<endl;
cout<<"student age:"<<student5.age<<endl;







}
