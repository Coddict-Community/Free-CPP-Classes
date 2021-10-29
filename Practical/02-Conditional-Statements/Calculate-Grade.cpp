// grade calculation using switch case..

#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks";
    cin >> marks;

    if (marks > 100)
    {
        printf("You have exceeded max limit."); // checking for max limit..
    }

    // starting of switch case:
    else
    {
        switch (marks / 10)
        {
        case 10:
        case 9:
            // marks bw 90-100..
            printf("Your grade is O");
            break;

        case 8:
            // marks bwn 80-89:
            printf("Your grade is E");
            break;

        case 7:
            // marks bwn 70-79..
            printf("Your grade is A");
            break;

        case 6:
            printf("Your grade is B");
            break;

        case 5:
            printf("Your grade is C");
            break;

        case 4:
            printf("Your grade is D");
            break;

        case 3:
        case 2:
        case 1:
            printf("You Failed");
            break;

        default:
            printf("Wrong input");
            break;
        }
    }

    return 0;
}