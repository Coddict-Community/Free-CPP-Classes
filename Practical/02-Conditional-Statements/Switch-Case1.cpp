#include <iostream>
using namespace std;
//1 -> 5 
int main() 
{
    int num;
    cout<<"Enter the number:\n";
    cin>>num;
    
    switch(num){
      case 1:
      cout<<"One\n";
      break;
      
      case 2:
      cout<<"Two\n";
      break;
      
      case 3:
      cout<<"Three\n";
      break;
      
      case 4:
      cout<<"Four\n";
      break;
      
      case 5:
      cout<<"Five\n";
      break;
      
      default:
      cout<<"Enter proper number:\n";
    }
}
