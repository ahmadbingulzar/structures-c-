#include<iostream>
using namespace std;
#include<cstring>
struct student
{
    char  name[30];
    char city[30];
};
int main()
{
    student student1;
    student student2;

    strcpy(student1.name,"ali ahmad");
    strcpy(student2.city,"bahawalnagar");

    cout<<"this is student 1 name "<<student1.name<<endl;
    cout<<"this is student 2 city"<<student2.city<<endl;
}