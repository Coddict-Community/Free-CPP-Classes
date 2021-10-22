// WAP to input Principal, Interest and Time form the user and then calculate and print the Simple Interest

#include <iostream>
using namespace std;

int main()
{
    float p, t, r, si;

    cout << "Enter the Principal Amount: ";
    cin >> p;
    cout << "Enter the Rate of Interest: ";
    cin >> r;
    cout << "Enter the Time Period: ";
    cin >> t;

    si = (p * t * r) / 100;
    cout << "Simple Interest = " << si;
    return 0;
}
