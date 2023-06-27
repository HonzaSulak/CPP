#include <iostream>
using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
{
private:
    string Company;
    int Age;
protected:
    string Name;
public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }

    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        if (age >= 18)
            Age = age;
    }
    int getAge()
    {
        return Age;
    }

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    void IntroduceYourself()
    {
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }

    void AskForPromotion()
    { // ABSTRACTION
        if (Age > 30)
        {
            cout << Name << " got promoted" << endl;
        }
        else
            cout << Name << " sorry no promo" << endl;
    }

    virtual void Work(){
        cout << Name << " is chcecking email, task backlog, performing tasks " << endl;
    }

};

class Developer :public Employee
{ // INHERITANCE
public:
    string FavProgLanguage;

    Developer(string name, string company, int age, string favProgLang)
    :Employee(name, company, age)
    {
        FavProgLanguage = favProgLang;
    }

    void FixBugs(){
        cout << Name << " fixes bug using " << FavProgLanguage << endl;
    }

    void Work(){
        cout << Name << " is writing "<< FavProgLanguage << " code" << endl;
    }

};

class Teacher:public Employee{
public:
    string Subject;
    void PrepareLesson(){
        cout << Name << " is preparing " << Subject << endl;
    }

    Teacher(string name, string company, int age, string subject)
    :Employee(name,company,age){
        Subject = subject;
    }
        void Work(){
        cout << Name << " is preparing "<< Subject << " lesson" << endl;
    }
};
int main()
{
    Employee Jim("James", "Dunder Mufflin", 36);
    Employee Pam("Pamella", "Dunder Mufflin", 24);
    Developer Jan("Honza", "Apple", 19, "C++");
    Teacher Paul("Pablo", "School", 47, "Math");



    // Jim.setAge(39);
    // cout << Jim.getName() << " is now " << Jim.getAge() << endl;

    // Jim.AskForPromotion();
    // Pam.AskForPromotion();

    // Jan.FixBugs();
    // Jan.AskForPromotion();

    // Paul.PrepareLesson();
    // Paul.AskForPromotion();

    // Jan.Work();
    // Paul.Work();
    // Jim.Work();

    Employee *ptrDev = &Jan;
    Employee *ptrTea = &Paul;

    ptrDev->Work();
    ptrTea->Work();




    return 0;
}