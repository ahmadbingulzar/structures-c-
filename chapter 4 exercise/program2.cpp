#include<iostream>
using namespace std;
struct point
{
    int x_axis;
    int y_axis;
    
};
int main()
{
    point point1;
    point point2;
    point point3;

    cout<<"Enter x axis for p1:";
    cin>>point1.x_axis;
    cout<<"Enter y axis for p1:";
    cin>>point1.y_axis;

    cout<<"enter x axis for p2:";
    cin>>point2.x_axis;
    cout<<"enter y axis for p2:";
    cin>>point2.y_axis;

    point3.x_axis=point1.x_axis+point2.x_axis;
    point3.y_axis=point1.y_axis+point2.y_axis;

    cout<<"coordinates for p1+p2 are:"<<point3.x_axis<<","<<point3.y_axis;

    return 0;


}