#include <iostream>
using namespace std;
struct date
{
    int day_of_month;
    int month;
    int year;
};
int main()
{
    date user1;

    cout<<"enter the day of the month:";
    cin>>user1.day_of_month;
    cout<<"enter the month:";
    cin>>user1.month;
    cout<<"enter the year:";
    cin>>user1.year;


    cout<<"Date is ="<<user1.day_of_month<<"/"<<user1.month<<"/"<<user1.year<<endl;
}