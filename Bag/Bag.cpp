#include "Bag.h" //Rasmi Lamichhane //csci2270-200 // hw2 //Brittany Ann Kos
#include <string>
#include <iostream>
using namespace std;
Bag::Bag()
{   //creating dynamic array of keeping all the string
    max=1000;
    size=0;
    items=new string[max];
    //ctor
}
bool Bag::addkeep(string keep)
{
    if(size==max)
    {
    cout<<"No room for your items"<<endl;
    return false;
    }
    else
    {
        items[size]=keep;
        size++;
        cout<<"'"<<keep<<"'"<<"was added to your pocket of magic"<<endl;
    }

}

bool Bag::displaykeep()
{

    for(int i=0; i<size; i++)//for looping so i can say
    {
        cout<<items[i]<<endl;//displaying all of my item in my main
    }
    cout<<"In your pocket of magic"<<endl;
}
bool Bag::deletekeep(string keep)
{
    for(int i=0; i<size;i++)
    {
        if(items[i]==keep)
        {
            items[i]=items[size-1];// then deleting it and putting the last array in that open space
            cout<<"'"<<keep<<"'"<<"was removed from your pocket of magic"<<endl;
            size--;//now we will have  one less place
            return true;
        }
    }
    cout<<"Sorry there is no"<<"'"<<keep<<"'"<<"in the pocket of magic"<<endl;
    return false;
}


Bag::~Bag()
{
    //dtor
}
