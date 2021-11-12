#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int main()
{
    int a, b, i, j, c, k = 0;
    cout << "Enter lower limit upper limit:-";
    cin >> a >> b;
    for (i = a; i <= b; i++)
    {
        c = 0;
        if (i > 1)
        {
            for (j = i - 1; j > 1; j--)
            {
                if (i % j == 0)
                {
                    c = 1;
                    break;
                }
            }
            if (c == 0)
            {
                cout << i << " ";
                k = 1;
            }
        }
    }
    if (k == 1)
        cout << "are prime";
    return 0;
}
