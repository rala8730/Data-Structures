#ifndef BAG_H  //Rasmi Lamichhane //csci2270-200 // hw2 //Brittany Ann Kos
#define BAG_H
#include <string>
using namespace std;
class Bag
{
    public:
    bool addkeep(string keep);
    bool displaykeep();
    bool deletekeep(string keep);
        Bag();
        ~Bag();


    private:
    int max;
    int size;//counts

    string *items;
//    bool addkeep(string keep);
    //bool displaykeep();

};

#endif // BAG_H
