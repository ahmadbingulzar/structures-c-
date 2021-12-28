#include<iostream>
using namespace std;
enum employee_type{laborer,secratery,manager,accountant,executive,researcher};
int main()
{
    char ch;
    employee_type l,s,m,a,e,r;
    l=laborer;
    s=secratery;
    m=manager;
    a=accountant;
    e=executive;
    r=researcher;

    cout<<"enter employee type first letter only  laborer,secratery,manager,accountant,executive,researcher:";
    cin>>ch;
    switch (ch)
    {
        case 'l':
            cout<<"employee type is "<<"laborer"<<endl;
            break;
        case 's':
            cout<<"employee type is "<<"secratery"<<endl;
            break;
        case 'm':
            cout<<"employee type is "<<"manager"<<endl;
            break;
        case 'a':
            cout<<"employee type is "<<"accountant"<<endl;
            break;
        case 'e':
            cout<<"employee type is "<<"executive"<<endl;
            break;
        case 'r':
            cout<<"employee type is "<<"researcher"<<endl;
            break;
    }


}