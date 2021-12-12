// 1
// 1 0
// 1 0 1
// 1 0 1 0
// 1 0 1 0 1
code:-
#include <iostream>
using namespace std;

int main() 
{
  for(int i = 0 ; i < 5 ; i++){
    for(int j = 0 ; j <= i ; j++){
      if(j%2==0){
        cout<<"1 ";
      }
      else{
        cout<<"0 ";
      }
    }
    cout<<"\n";
  }
  return 0;
}
#include <iostream>
using namespace std;

int main() 
{
    for(int i = 1 ; i <=5 ; i++){
      
      //for spaces
      for(int j = 1 ; j <= 5-i ; j++){
        cout<<"  ";
      }
      //for left part
      for(int k  = 1 ; k <= i ; k++){
        cout<<k<<" ";
      }
      
      //for right part
      for(int p = i-1 ; p>0 ; p--){
        cout<<p<<" ";
      }
      cout<<endl;
    }
    return 0;
}
//        1       
//      1 2 1
//    1 2 3 2 1
//  1 2 3 4 3 2 1
//1 2 3 4 5 4 3 2 1

// 1st row = 1 element
// 2nd row = 3 element
// 3rd row = 5 element
// 4th row = 7 element
// 5th row = 9 element

// number of spaces = 5-row
// number of elements = 2*row-1


