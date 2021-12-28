#include<iostream>
using namespace std;
struct time_calculation
{
   unsigned long long  int    hours;
   unsigned long long  int   minutes;
   unsigned long long  int   seconds;
   unsigned long long  int   result;
};
int main()
{
    time_calculation time_a,time_b,total_time;
    cout<<"Enter hours for first format:";
    cin>>time_a.hours;
    cout<<"Enter minutes for first format:";
    cin>>time_a.minutes;
    cout<<"Enter seconds for first format:";
    cin>>time_a.seconds;


    cout<<"Enter hours for seconds format:";
    cin>>time_b.hours;
    cout<<"Enter minutes for seconds format:";
    cin>>time_b.minutes;
    cout<<"Enter seconds for seconds format:";
    cin>>time_b.seconds;

   total_time.result= (time_a.hours*3600+time_a.minutes*60+time_a.seconds)+(time_b.hours*3600+time_b.minutes*60+time_b.seconds);
    cout<<"Total seconds ="<<total_time.result;
    
    total_time.hours=total_time.result/3600;
    total_time.minutes=(total_time.result/60)%60;
    //cout<<total_time.minutes;
    total_time.seconds=total_time.result%60;
    cout<<"final format:"<<total_time.hours<<"/"<<total_time.minutes<<"/"<<total_time.seconds<<endl;






}