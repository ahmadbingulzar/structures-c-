#include<iostream>
using namespace std;
struct phone
{
    int area_code;
    int exchange_code;
    int number;
};
int main()
{
   phone  phone1={212,767,8900};
    phone phone2;

    cout<<"enter your area code:";
    cin>>phone2.area_code;
    cout<<"enter your exchange code:";
    cin>>phone2.exchange_code;
    cout<<"enter your number:";
    cin>>phone2.number;

    cout<<"my number is "<<phone1.area_code<<" "<<phone1.exchange_code<<" "<<phone1.number;

    return 0;

}