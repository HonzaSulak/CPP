#include <iostream>
using namespace std;

class Movie
{
private:
    int rating;

public:
    string name;
    string director;

    Movie(string a, string b, int c)
    {
        name = a;
        director = b;
        setRating(c);
    }

    void setRating(int c)
    {
        if (c > 0 && c <= 100)
        {
            rating = c;
        }
        else
        {
            rating = 0;
        }
    }
    int getRating()
    {
        return rating;
    }

    string isGood()
    {
        if (getRating() >= 18)
        {
            string answer = "good movie\n";
            return answer;
        }
        string answer = "bad movie\n";
        return answer;
    }
};

void printMovie(Movie title){
    cout << "jmeno filmu: " << title.name << endl;
    cout << "jmeno direktor: " << title.director << endl;
    cout << "rating: " << title.getRating() << endl;
    cout << "rating: " << title.isGood();
}

int main()
{
    Movie pussy("SUCK", "Dick", 188);
    Movie hasher("DUSH", "Big", 19);

    printMovie(pussy);

    return 0;
}