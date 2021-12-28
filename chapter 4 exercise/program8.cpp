#include<iostream>
using namespace std;
struct fraction
{
    int number_a;
    int number_b;
    int number_c;
    int number_d;
    int result;
};
int main()
{
    fraction calculate;
   
    cout<<"enter value of a  :";
    cin>>calculate.number_a;
    cout<<"enter value of b  :";
    cin>>calculate.number_b;
    cout<<"enter value of c  :";
    cin>>calculate.number_c;
    cout<<"enter value of d  :";
    cin>>calculate.number_d;
  cout<<"sum = "<<(calculate.number_a*calculate.number_d)+(calculate.number_b*calculate.number_c)<<'/'<<(calculate.number_b*calculate.number_d);
  return 0;
   
}