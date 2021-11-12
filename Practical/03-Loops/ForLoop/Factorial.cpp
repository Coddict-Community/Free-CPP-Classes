#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int main()
{
    int a, i, f = 1;
    cout << "Enter a no.";
    cin >> a;
    if (a >= 0)
    {
        for (i = a; i > 1; i--)
            f *= i;
        cout << "factorial of " << a << " is " << f;
    }
    return 0;
}
