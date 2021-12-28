#include<iostream>
using namespace std;
struct part
{
    int model_number;
    int part_number;
    float cost;

};
////////////////////////////////////////////////////////////
int main()
{
    part part1={6244,373,217.55F};
    part part2;

    cout<<"Model"<<part1.model_number<<endl;
    cout<<"Part"<<part1.part_number<<endl;
    cout<<"cost"<<part1.cost<<endl;

    part2=part1;
    

    cout<<"Model"<<part2.model_number<<endl;
    cout<<"Part"<<part2.part_number<<endl;
    cout<<"cost"<<part2.cost<<endl;
    return 0;
}
