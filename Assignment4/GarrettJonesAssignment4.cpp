#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double quantity;

    cout << "Please enter the number of units purchased to receive the discount amount: " << endl;
    cin >> quantity;
    int a;
    a = quantity;

    bool bool1, bool2, bool3, bool4;

    bool1 = (10 <= a) && (a <= 19);
    bool2 = (20 <= a) && (a <= 49);
    bool3 = (50 <= a) && (a <= 99);
    bool4 = (100 <= a) && (a <= 900000);

    if(bool1)
    {
    cout << "Your discount is 20%. \n";
    }
    else if(bool2)
    {
    cout << "Your discount is 30%. \n";
    }
    else if(bool3)
    {
    cout << "Your discount is 40%. \n";
    }
    else if(bool4)
    {
    cout << "Your discount is 50%. \n";
    }
return 0;
}
