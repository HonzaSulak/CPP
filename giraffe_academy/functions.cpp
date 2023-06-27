#include <iostream>
#include <cmath>

using namespace std;

int cube(int a, int b){

    int i = pow(a, b);
    return i;
}

int main(){
    int kostka = cube(5, 3);
    cout << "kostka ma objem: " << kostka << endl;

    return 0;
}