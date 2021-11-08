// #include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int child_tickit_cost = 10;
    int adult_tickit_cost = 25;
    int old_tickit_cost = 15;

    cout << "\tAMAZING TICKET COUNTER\n";
    cout << "======================================\n";

    int total_number_of_tickit;
    cout << "Enter the number of tickits you want to buy : ";
    cin >> total_number_of_tickit;

    int no_child, no_adult, no_old;
    cout << "Enter the number of people who has age between (0 - 15) : ";
    cin >> no_child;
    cout << "Enter the number of people who has age between (16 - 55) : ";
    cin >> no_adult;
    cout << "Enter the number of people who has age between (more than 55) : ";
    cin >> no_old;

    if ((no_child + no_adult + no_old) == total_number_of_tickit)
    {
        int totalCost = (no_child * child_tickit_cost) + (no_adult * adult_tickit_cost) + (no_old * old_tickit_cost);
        cout << "Amount you need to pay : " << totalCost << endl;

        cout << "\tPayment Mode\n";
        cout << "==========================";
        cout << "\nPress 1 . Pay using card\n";
        cout << "Press 2 . Pay using cash\n";
        int choice;
        cout << "Enter your choice : ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Payment Successful\nThank You\nEnjoy Your Day";
        }
        else if (choice == 2)
        {
            cout << "Enter the amount you given : ";
            int amount_given;
            cin >> amount_given;
            cout << "Amount returned : " << amount_given - totalCost << "\n";
            // TODO : Give a if-else condition here
            cout << "Thank You \nEnjoy Your Day";
        }
        else
        {
            cout << "Invalid Input";
        }
    }
    else if ((no_child + no_adult + no_old) < total_number_of_tickit)
    {
        cout << "I think someone is missing...";
    }
    else
    {
        cout << "You have entered more members...";
    }
    return 0;
}
