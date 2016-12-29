#include <iostream>                 //Rasmi Lamichhane //csci2270-200 // hw2 //Brittany Ann Kos
#include <string>
#include "Bag.h"
#include "SingleLinkedList.h"
#include "DoubleLinkedList.h"
#include "SingleNode.h"
#include "DoubleNode.h"
//typedef string ItemType // so class can include string
using namespace std;

int main()
{
    Bag PocketOfMagic;
    SingleLinkedList PocketOfPotions;
    DoubleLinkedList PocketOfGoods;
    cout<< "Welcome Adventurer to the Game of Holding.  You will need to be careful on your journey!"<<endl;
    int chooseoption = 0;
    while(chooseoption!=4)
    {
       cout<<"Which pocket do you want to access? (Enter the number to access that pocket)?"<<endl
        <<"1. Pocket of Magic"<<endl
        <<"2. Pocket of Potions"<<endl
        <<"3. Pocket of Goods"<<endl
        <<"4. Retreat (Exit the program)"<<endl;

        cin>>chooseoption;
        if (chooseoption==4)
        {
            chooseoption=4;
        }

        else
        {
        switch (chooseoption)

        {

            case 1:
            {
                cout<<"You selected the Pocket of Magic!"<<endl;
                cout<<" "<<endl;
                int choose = 0;
                while(choose!=4)
                {
                    cout<<"What do you choose to do?"<<endl
                    <<"1. Keep (Enter item to add into the pocket)"<<endl
                    <<"2. Dismiss (Display item and remove it from the pocket)"<<endl
                    <<"3. Reveal (Display the pocket’s contents)"<<endl
                    <<"4. Retreat (Go back to main menu)"<<endl;
                    //keep is a set of string and you add it to it whenever user enter keep
                    string keep;
                    cin>>choose;
                    if(choose==1)
                    {
                        cin>>keep;
                        PocketOfMagic.addkeep(keep);

                    }
                    else if(choose==2)
                    {
                    //delete
                    cin>>keep;
                        PocketOfMagic.deletekeep(keep);
                    }
                    else if(choose==3)
                    {
                    //display all the item from the keep
                     PocketOfMagic.displaykeep();

                    }
                } break;
            }


            case 2:
            {
                cout<<"You selected the Pocket of Potion!"<<endl;
                cout<<" "<<endl;
                int choose = 0;
                while(choose!=4)
                {
                    cout<<"What do you choose to do?"<<endl
                    <<"1. Keep (Enter item to add into the pocket)"<<endl
                    <<"2. Dismiss (Display item and remove it from the pocket)"<<endl
                    <<"3. Reveal (Display the pocket’s contents)"<<endl
                    <<"4. Retreat (Go back to main menu)"<<endl;
                    //keep is a set of string and you add it to it whenever user enter keep
                    string data;
                    cin>>choose;
                    if(choose==1)
                    {
                        cin>>data;
                        PocketOfPotions.addNode(data);

                    }
                    else if(choose==2)
                    {
                    //delete
                    cin>>data;
                        PocketOfPotions.deleteNode(data);
                    }
                    else if(choose==3)
                    {
                    //display all the item from the keep
                     PocketOfPotions.traverseAndPrint();

                    }
                }break;
            }
             case 3:
            {
                cout<<"You selected the Pocket of Good!"<<endl;
                cout<<" "<<endl;
                int choose;
                while(choose!=4)
                {
                    cout<<"What do you choose to do?"<<endl
                    <<"1. Keep (Enter item to add into the pocket)"<<endl
                    <<"2. Dismiss (Display item and remove it from the pocket)"<<endl
                    <<"3. Reveal (Display the pocket’s contents)"<<endl
                    <<"4. Retreat (Go back to main menu)"<<endl;
                    //keep is a set of string and you add it to it whenever user enter keep
                    string data;
                    cin>>choose;
                    if(choose==1)
                    {
                        cin>>data;
                        PocketOfGoods.addNode(data);

                    }
                    else if(choose==2)
                    {
                    //delete
                    cin>>data;
                        PocketOfGoods.deleteNode(data);
                    }
                    else if(choose==3)
                    {
                    //display all the item from the keep
                     PocketOfGoods.traverseAndPrintForward();

                    }
                }break;
            }
        cout<<"Rereat"<<endl;

        }
        }
     }
     cout<<"Good luck on your travels Adventurer!"<<endl;
    return true;
}
