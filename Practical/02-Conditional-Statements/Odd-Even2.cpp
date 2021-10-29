// odd-even using switch case..

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    b = a % 2;
    switch (b)
    {
    case 0:
        cout << "Even";
        break;
    default:
        cout << "Odd";
    }
    return 0;
}