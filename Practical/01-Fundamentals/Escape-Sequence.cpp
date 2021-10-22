#include <iostream>
using namespace std;

int main()
{
    // '\n' and 'endl' both has same operation
    cout << "This\nis\na\ntest\n\nShe said, \"Sells she seashells on the seashore?\"\n"; // \n moves the cursor to the next line
    cout << "Coddict\rCommunity"; // \r moves the cursor to the start of the line
    cout << "Coddict\b"; // \b add a backspace after printing
    cout << "Coddict\tCommunity"; //\t adds a tab 

/*
    This
    is
    a
    test

    She said, "Sells she seashells on the seashore?"
*/
    return 0;
}
