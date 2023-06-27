#include <iostream>
using namespace std;

class Chef
{
public:

    void makeChicken()
    {
        cout << "chicken staff " << endl;
    }
    void makeSalad()
    {
        cout << "salad sdsd " << endl;
    }
    void makeSpecial()
    {
        cout << "special dish" << endl;
    }
};

class ItalianChef : public Chef
{
public:
    void makeItalian()
    {
        cout << "spaghetti" << endl;
    }
};

int main()
{
    Chef adam;
    ItalianChef bob;

    adam.makeChicken();
    bob.makeItalian();


    return 0;
}