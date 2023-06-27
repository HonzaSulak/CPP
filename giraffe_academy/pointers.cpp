#include <iostream>

using namespace std;

int main()
{
    int age = 19;
    int *pAge = &age;
    cout << *pAge << endl
         << pAge << endl;
    return 0;
}