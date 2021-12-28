#include <iostream>
using namespace std;
struct time_seconds
{
    int hours;
    int minutes;
    int seconds;
    long int total_seconds;
};
int main()
{
    time_seconds time_calculation;
    cout << "Enter hours:";
    cin >> time_calculation.hours;
    cout << "Enter minutes:";
    cin >> time_calculation.minutes;
    cout << "Enter seconds:";
    cin >> time_calculation.seconds;
    time_calculation.total_seconds = time_calculation.hours * 3600 + time_calculation.minutes*60 + time_calculation.seconds;
    cout << "Total Time in seconds is =" << time_calculation.total_seconds;
}
