#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int main()
{
    int a, i, c = 0;
    cout << "Enter a no.";
    cin >> a;
    if (a > 1)
    {
        for (i = a / 2; i > 1, c == 0; i--)
        {
            if (a % i == 0)
            {
                c = 1;
            }
        }
        if (c == 1)
            cout << a << " is Not Prime";
        else
            cout << a << " Prime";
    }
    else if (a == 1)
        cout << "1 is niether prime nor composite";
    else
        cout << "you have entered a negative no.";
    return 0;
}
