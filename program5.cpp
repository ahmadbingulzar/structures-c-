#include<iostream>
using namespace std;
const int clubs=0;
const int diamonds=1;
const int hearts=1;
const int spades=3;


const int jack=11;
const int queen=12;
const int king=13;
const int ace=14;

///////////////////////////////////////////////////////////////////
struct card
{
    int number;
    int suit ;

};

int main()
{
    card temp,chosen,prize;
    int position;
    

    card card1={7,clubs};
    cout<<"card 1 is the 7 of the clubs"<<endl;

    card card2={jack,hearts};
    cout<<"card 2 is the jack of hearts"<<endl;

    card card3={ace,spades};
    cout<<"card 3 is the ace of spades"<<endl;

    prize=card3;

    cout<<"i am swapping card 1 and card 3"<<endl;
    temp=card3; card3=card1; card1=temp;

    cout<<"i am swapping card 2 and card 3"<<endl;
    temp=card3; card3=card2; card2=temp;

    cout<<"i nam swapping card 1 and card 2"<<endl;
    card1=card1;
    cout<<"now where (1,2,3) is the ace of spades: ";
    cin>>position;

    switch (position)
    { 
        case 1:
            chosen=card1;
            break;
        
        case 2:
            chosen=card2;
            break;
        case 3:
            chosen=card3;
            break;
    }
    if(chosen.number==prize.number&& chosen.suit==prize.suit)
    {
        cout<<"thats right you win";
    }
    else 
        cout<<"you lose";


}