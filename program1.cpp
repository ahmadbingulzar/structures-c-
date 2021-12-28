#include<iostream>
using namespace std;
struct part
{
    int model_number;
    int part_number;
    float cost;
    string man;

};
////////////////////////////////////////////////////////////////
int main()
{
    part part1;
    part1.model_number=6244;
    part1.part_number=373;
    part1.cost=217.55F;


    cout<<"Model"<<part1.model_number<<endl;
    cout<<"part"<<part1.part_number<<endl;
    cout<<"cost"<<part1.cost<<endl;
    

    part1.man="my name is ali";
    cout<<part1.man;

}