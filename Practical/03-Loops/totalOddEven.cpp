#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int main()
{
    int a, i, o = 0, e = 0;
    for (i = 1; i < 11; i++)
    {
        cout << "Enter a no.";
        cin >> a;
        if (a % 2 == 0)
            e += 1;
        else
            o += 1;
    }
    cout << "Total of odd is " << o << "\nTotal of even is " << e;
    return 0;
}
