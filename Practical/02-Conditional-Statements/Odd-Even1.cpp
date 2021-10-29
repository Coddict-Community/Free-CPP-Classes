// odd-even using switch

#include <iostream>
using namespace std;

int main()
{
    int choice;
    cin >> choice;

    // start of switch case..

    switch (choice)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
        cout << "Odd";
        break;

    case 2:
    case 4:
    case 6:
    case 8:
        cout << "Even";
        break;

    default:
        cout << "Wrong input";
        break;
    }
}