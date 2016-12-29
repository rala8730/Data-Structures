#include <iostream>
#include "BinaryTree.h"
//#include "Book.h"
#include<stdlib.h>//atio
#include<fstream>
#include<sstream>
#include <string>

using namespace std;



int main()
{
    BinaryTree myBT;


    int cost=0;
    int choice=0;
    string item;
    string line;
    int ISBN=0,Quantity=0,OnSale=0;
    double Price;
    string FirstName,LastName,Genre, Title;
    cout<<"are you ready to use this binary tree[yes/no]"<<endl;
    string choicee;
    cin>>choicee;
    while(choicee=="yes")
    {
        cout<<"Welcome what would you like to do"<<endl;
        cout<<"1. Add all books from inventory"<<endl;
        cout<<"2. Add a single book"<<endl;
        cout<<"3. Sell a single book"<<endl;
        cout<<"4. find a book"<<endl;
        cout<<"5. Print the entire inventory"<<endl;
        cout<<"6. Print bargain books"<<endl;
        cout<<"7. Print on sale books"<<endl;
        cout<<"8. Terminate program"<<endl;
        cin>>choice;


        while(choice!=8)
        {

            if(choice==1)
            {

                ifstream myfile ("Inventory_Med_Random.txt");
                if (myfile.is_open())
                {
                    bool flag=true;

                     while (getline(myfile,line))
                    {
                        if(flag)
                        {
                            flag=false;
                        }
                        else
                        {
                        //adding all the book on bst tree
                            int counter=0;

                            Book newbook;
                            stringstream ss(line);
                            while(getline(ss,item,','))
                            {
                            //cout<<item<<endl;//prints in the list

                                switch(counter)
                                {

                                    case(0):
                                        {
                                        string sISBN=item;
                                        ISBN=atoi(sISBN.c_str());
                                        //cout<<ISBN<<endl;
                                        newbook.ISBN=ISBN;
                                        break;
                                        }
                                    case(1):
                                        {
                                        Title=item;
                                        //cout<<item<<endl;
                                        newbook.Title=Title;
                                        break;
                                        }
                                    case(2):
                                        {
                                        FirstName=item;
                                        //cout<<FirstName<<endl;
                                        newbook.FirstName=FirstName;
                                        break;
                                        }
                                    case(3):
                                        {
                                        LastName=item;
                                        //cout<<LastName<<endl;
                                        newbook.LastName=LastName;
                                        break;
                                        }
                                    case(4):
                                        {
                                        Genre=item;
                                        newbook.Genre=Genre;
                                        //cout<<Genre<<endl;
                                        break;
                                        }
                                    case(5):
                                        {
                                        string sPrice=item;
                                        Price=atof(sPrice.c_str());
                                        //cout<<Price<<endl;
                                        newbook.Price=Price;
                                        break;
                                        }
                                    case(6):
                                        {
                                        string sQuantity=item;
                                        Quantity=atoi(sQuantity.c_str());
                                       // cout<<Quantity<<endl;
                                        newbook.Quanity=Quantity;
                                        break;
                                        }
                                    case(7):
                                        {
                                        string sOnSale=item;
                                        OnSale=atoi(sOnSale.c_str());
                                        //cout<<OnSale<<endl;
                                        newbook.OnSale=OnSale;
                                        break;
                                        }

                                    }// end switch
                                    //cout<<item<<endl;
                                    counter++;

                                }// end 2nd while
                                counter=0;
                                myBT.addIntegerNode(newbook);

                                //cout<<myBT.getNumberSize()<<endl;
                        }// end else flag
                    }// end first while

                    myfile.close();
                }
                else
                {
                    cout<< "file not open"<<endl;
                }
                //myBT.traverseAndPrintBreadthFirst();
                myBT.traverseAndPrintInorder();
                break;
            }//end case 1
            if(choice==2)
            {//add a new book into bst sorted
                Book newbook;
                cout<<"Enter the ISBN of the book"<<endl;
                cin>>ISBN;
                newbook.ISBN=ISBN;

                cout<<"Enter the title of the book"<<endl;
                cin>>Title;
                getline(cin,Title);

                cout<<"Enter the Author first name"<<endl;
                cin>>FirstName;
                newbook.FirstName=FirstName;
                cout<<"Enter Author Last Name"<<endl;
                cin>>LastName;
                newbook.LastName=LastName;
                cout<<"Enter the Genre of the book"<<endl;
                cin>>Genre;
                newbook.Genre=Genre;
                cout<<"Enter the price of the book"<<endl;
                cin>>Price;
                newbook.Price=Price;
                cout<<"Enter if the book is on sale or not"<<endl;
                cin>>OnSale;
                newbook.OnSale=OnSale;
                cout<<"Enter the Quanity"<<endl;
                cin>>Quantity;
                newbook.Quanity=Quantity;

                myBT.addIntegerNode(newbook);
                //myBT.traverseAndPrintInorder();
            break;
            }
            if(choice==3)
            {//selling a book
                cout<<"Do you have ISBN or Title??"<<endl;
                string herechoice;
                cin>>herechoice;

                if(herechoice=="Title")
                {
                    cout<<"Please Enter your Title"<<endl;
                    cin>>Title;
                    myBT.sellabook(Title,cost);
                }
                else if(herechoice=="ISBN")
                {   cout<<"please Enter your ISBN"<<endl;
                    cin>>ISBN;

                    myBT.sellabook(ISBN, cost);

                }
                else{}

            break;
            }
            if(choice==4)
            {
            cout<<"---finding---"<<endl;
            cout<<"Do you have ISBN or Title??"<<endl;
            string herechoice;
            cin>>herechoice;

            if(herechoice=="Title")
            {
                cout<<"Enter the Title"<<endl;
                cin>>Title;
                myBT.findabook(Title,cost);
            }
            else if(herechoice=="ISBN")
            {
                cout<<"Enter the ISBN"<<endl;
                cin>>ISBN;
                myBT.findabook(ISBN,cost);
            }

            break;
            }
            if(choice==5)
            {
            //print all the available  book in
            //store using depth first search, inorder traverse
            //myBT.traverseAndPrintBreadthFirst();
            myBT.traverseAndPrintInorder();
            break;
            }
            if(choice==6)
            {
            //print the bargin  books
                cout<<"Enter the maximum amount you are willing to pay"<<endl;
                cin>>Price;
                for(int i=0; i<=Price;i++)
                {

                    //print all the books and its info in sorted order
                    //using depth first, inorder traversal
                 //  myBT.getSuccessor(,cost);

                    myBT.findprice(Price,cost);

                }

            break;
            }
            if(choice==7)
            {
            myBT.findsale(OnSale,cost);
            //print  all the objects in sale sorted in order
            break;
            }


        }
        if(choice==8)
        {
            myBT.Deletenow();
            return 0;

        }
    }

    return 0;
}
