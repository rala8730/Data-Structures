#include <iostream>////Rasmi Lamichhane // jul 13 2015 //csci-2270-200 //cplusplus.com
#include "Battleship.h"
// actual implementation
using namespace std;
using namespace BattleshipNS;
//class methodes=methodes
BattleshipNS::Ship::Ship()//constructor
{
    row_position=-1;
    col_position=-1;
    status=true;
}

int BattleshipNS::Ship::getrow()// returns a position
{
    return row_position;
}
int BattleshipNS::Ship::getcol()// returns a position
{
    return col_position;
}
bool BattleshipNS::Ship::getstatus()// returns a position
{
    return status;
}
int BattleshipNS::Ship::setrow(int r)// set ship to some posiion
{
    row_position=r;
}
int BattleshipNS::Ship::setcol(int c)// set ship to some posiion
{
    col_position=c;
}
bool BattleshipNS::Ship::setstatus()// set ship to some posiion
{
    return status;
}
BattleshipNS::Ship::~Ship()
{

}
