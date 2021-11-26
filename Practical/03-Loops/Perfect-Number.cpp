// WAP to accept a number and then check if it is a Perfect Number or not

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    int sum = 0;
    cout << "Positive Factors of " << n << " are: ";
    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0) {
            sum += i;
            cout << i << " ";
        }
    }
    if(n == sum)
        cout << "\nIt is a Perfect Number" << endl;
    else
        cout << "\nIt is not a Perfect Number" << endl;
    return 0;
}
