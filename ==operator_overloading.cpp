#include <iostream>
#include <string>
using namespace std;

class car
{
private:
    string name;
    int cost;

public:
    car(string n, int c)
    {
        name = n;
        cost = c;
    }

    bool operator==(const car &c)
    {
        if (name == c.name && cost == c.cost)
        {
            return true;
            return false;
        }
    }
};

int main()
{
    car car1("ferrari", 400000);
    car car2("ferrari", 400000);
   

    if (car1 == car2)
    {
        cout << "it is Eqivalant";
    }
    else
        cout << "not Eqivalant";

    return 0;
}