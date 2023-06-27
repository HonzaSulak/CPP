#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const short min_value = 1;
    const short max_value = 6;

    srand(time(0));
    int first = (rand() % (max_value - min_value + 1));
    int second = (rand() % (max_value - min_value + 1));

    cout << first << " and " << second << endl;

    return 0;
}