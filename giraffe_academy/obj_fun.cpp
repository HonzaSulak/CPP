#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    string major;
    int gpa;

    Student(string Aname, string Amajor, int Agpa)
    {
        name = Aname;
        major = Amajor;
        gpa = Agpa;
    }

    bool hasHonors()
    {
        if (gpa <= 1.5)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Student student1("Jan", "SMH", 1);

    Student student2("Tas", "FSAD", 2);

    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;
    
    return 0;
}