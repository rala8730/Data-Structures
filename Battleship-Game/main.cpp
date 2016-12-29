#include <iostream>         //Rasmi Lamichhane // jul 13 2015 //csci-2270-200 //cplusplus.com
#include "Battleship.h"
#include <cstdlib>
using namespace BattleshipNS;
using namespace std;
//code uses the class=usage
int main()
{
    Ship S1;//5 objects
    Ship S2;
    Ship S3;
    Ship S4;
    Ship S5;
    int row;
    int col;
    int boardsiz;
    int no_of_ship;
    int limit;
    bool board[row][col];//new board array
    cout<<"Welcome to the B A T T L E S H I P !"<<endl;
    cout<<"How vast are your oceans? (Enter an integer for the size of the board)"<<endl;
    cin>>boardsiz;
    limit=boardsiz*boardsiz;
    cout<<"How many ships are in your fleet? (Enter an integer for the number of ships)"<<endl;
    cin>>no_of_ship;
    //checking if the no of ship  fits wih he board size
    while(boardsiz<limit && no_of_ship<limit)
    {
        cout<<"Let the battle begin! Enter your guess (Enter two integers for the ship’s location)"<<endl;
        cin >>row>>col;
        Ship S1[row][col];
        S1[row][col];
        //Randomly set ship's positions
        srand(time(0));
        for (int i=0; i<no_of_ship; i++)
        {
        int row= rand() % boardsiz + 1;
        int col= rand() % boardsiz + 1 ;
           /* if (S1[i-1].getrow()!= row || S2[i-1].getcol()!= col)
            {
                board[row][col]= 1; //set 1 where there's a ship
                S1[i].setrow(row);
                S2[i].setcol(col);
            }*/
            if (!board[row][col]){
            //Ship S1[i]->setrow(row);
            board[row][col]= 1;
            //Ship S1[row][col]=1;
            }
        }
        //for loop for no of ship decreasing
        for(int i;i<no_of_ship;i++)
        {
//            if(board[row][col]==rand[row][col])
            no_of_ship=no_of_ship-1;
        }
        while(no_of_ship=!0)
        {

           if (no_of_ship==no_of_ship-1)
           {
            cout<<"Shunk! YaY"<<no_of_ship<<endl;
           // cout<<"Enter two integers for the another ship’s location "<<endl;
            //cin>>[row][col];
            continue;
            }
            else if (no_of_ship==no_of_ship)
            {
              cout<<"MISS"<<endl;
              //cout<<"you can now enter 2nd guess"<<endl;
              //cout<<"Enter two integers for the ship’s location again"<<endl;
              //continue;
              break;

            }
        }

            if(no_of_ship==0)
            cout<<"Congratulation  you have own"<< no_of_ship-1/*the iterator time...how many time the player played the game*/<<endl;
            cout<<"Game over"<<endl;

/*b*/
    }
//    else
    cout<<"Out of bound"<<endl;
    exit(1);



    return 0;
}

