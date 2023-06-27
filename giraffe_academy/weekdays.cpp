#include <iostream>
#include <cmath>

using namespace std;

string getDayWeek(int a){

    string dayNum;

    switch (a)
    {

    case 1:
        dayNum = "Monday";
        break;
    case 2:
        dayNum = "Tuesday";
        break;
    case 3:
        dayNum = "Wednesday";
        break;
    case 4:
        dayNum = "Thursday";
        break;
    case 5:
        dayNum = "Friday";
        break;
    case 6:
        dayNum = "Saturday";
        break;
    case 7:
        dayNum = "Sunday";
        break;
    default:
        dayNum = "Invalid input";
        break;
    }
    return dayNum;
}

int main(){
    int a;
    cout << "zadej cislo: ";
    cin >> a;
    string day = getDayWeek(a);

    cout << "dnes je: " << day << endl;

    return 0;
}