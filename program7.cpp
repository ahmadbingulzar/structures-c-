#include <iostream>
using namespace std;

enum its_a_word{No, Yes};

int main()
{
    its_a_word is_word =No;

    char ch;
    int wordcount =0;

    cout<<"Enter a phrase"<<endl;
    do{
        cin.get(ch);
        if(ch==' '||ch=='\r')
        if(is_word==Yes)
        {
            wordcount++;
            is_word=No;
        }
        else if(is_word==No)
        {
            is_word=Yes;

        }
    }
        while(ch!='\r');
    cout<<"word count is ="<<wordcount<<endl;
}
