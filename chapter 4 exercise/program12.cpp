#include <iostream>
using namespace std;
struct values
{
    char operator_a;
    int numenator;
    int denomenator;
    

};
int main()
{
    char sign;
    values number1,number2,number3;
    cout<<"Enter first fraction values:";
    cout<<"enter numenator:";
    cin>>number1.numenator;
    cout<<"enter denominator:";
    cin>>number1.denomenator;

    cout<<"enter operator :";
    cin>>sign;
    
    cout<<"enter second fraction values:";
    cout<<"enter numenator:";
    cin>>number2.numenator;
    cout<<"enter denominator:";
    cin>>number2.denomenator;

switch(sign)
{
    case '+':
    number3.numenator=(number1.numenator*number2.denomenator+number1.denomenator*number2.numenator);
    number3.denomenator=  ( number1.denomenator*number2.denomenator );
    cout<<"sum is ="<<number3.numenator<<"/"<<number3.denomenator<<endl;
    break;

    case '-':
    number3.numenator=(number1.numenator*number2.denomenator-number1.denomenator*number2.numenator);
    number3.denomenator=  ( number1.numenator*number2.denomenator );
    cout<<"calculation is ="<<number3.numenator<<"/"<<number3.denomenator<<endl;
    break;

    case '*':
    number3.numenator=number1.numenator*number2.numenator;
    number3.denomenator=number1.denomenator*number2.denomenator;
    cout<<"calculation is ="<<number3.numenator<<"/"<<number3.denomenator<<endl;
    break;

    case '/':
    number3.numenator=number1.numenator*number2.numenator;
    number3.denomenator=number1.denomenator*number2.numenator;
    cout<<"calculation is ="<<number3.numenator<<"/"<<number3.denomenator<<endl;
    break;



}










}




















