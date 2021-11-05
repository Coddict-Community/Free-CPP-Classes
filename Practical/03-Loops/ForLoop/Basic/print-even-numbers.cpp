//Taking 10 integers as input and finding out the even ones
#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout<<"Even numbers are:\n";
    for(int i = 0 ; i < 10 ; i++){
      cin>>num;
      if(num%2==0){
        cout<<num<<" ";
      }
    }
}
