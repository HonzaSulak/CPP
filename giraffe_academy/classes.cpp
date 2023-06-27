#include <iostream>

using namespace std;

class Book
{
public:
    string title;
    string author;
    int pages;

    
    Book()
    {
        title = "no title";
        author = "no athor";
        pages = 0;
    }
    Book(string argumentAuthor, string argumentTitle, int argumentPages)
    {
        title = argumentTitle;
        author = argumentAuthor;
        pages = argumentPages;
    }
};

int main()
{
    Book book1("Jan", "SMH", 45);

    Book book2("Tas", "FSAD", 845);

    Book book3;

    cout << book1.author << endl
         << book1.title << endl
         << book1.pages << endl;

    cout << book3.author << endl
         << book3.title << endl
         << book3.pages << endl;
    return 0;
}