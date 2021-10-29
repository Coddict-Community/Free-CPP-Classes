#include <iostream>
using namespace std;

int main()
{
  int marks;
  cout << "Enter the marks: ";
  cin >> marks;

  switch (marks)
  {
  case 0 ... 39:
    cout << "Fail\n";
    break;

  case 40 ... 49:
    cout << "D\n";
    break;

  case 50 ... 59:
    cout << "C\n";
    break;

  case 60 ... 69:
    cout << "B\n";
    break;

  case 70 ... 79:
    cout << "A\n";
    break;

  case 80 ... 89:
    cout << "E\n";
    break;

  case 90 ... 100:
    cout << "O\n";
    break;

  default:
    cout << "Enter Valid mark.\n";
    break;
  }
}
