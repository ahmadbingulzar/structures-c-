#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};
struct volume
{
    Distance lenght;
    Distance width;
    Distance height;
};
int main()
{
    volume room1={{16,3.5},{12,6.25},{8,1.75}};

    float i=room1.lenght.feet+room1.lenght.inches/12;
    float w=room1.width.feet+room1.width.inches/12;
    float h=room1.height.feet+room1.height.inches/12;

    cout<<"total volume of room1 is ="<<i*w*h<<":cubic feet "<<endl;

}
