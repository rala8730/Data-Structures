#ifndef Battleship_h    ////Rasmi Lamichhane // jul 13 2015 //csci-2270-200 //cplusplus.com
#define Battleship_h
//deceleration of implementation=interface
namespace BattleshipNS
{   class Ship
    //class definitation
    {
    private: //include private function here
        bool status;
        int row_position;
        int col_position;
    public://include variable here
        Ship();//constructor
        int getrow();
        int getcol();
        bool getstatus();//if ship has been discover or not
        int setrow(int r);
        int setcol(int c);
        bool setstatus();
        int pos();
         ~Ship();//destructor

    };
};

#endif // Battleship_h
