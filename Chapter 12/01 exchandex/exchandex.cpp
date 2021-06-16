// A simple exception handling example. 
 
#include <iostream> 
using namespace std; 
 
int main() 
{ 
  cout << "start\n"; 
 
  try 
  { // start a try block 
    cout << "Inside try block\n"; 
    throw 99; // throw an error 
    cout << "This will not execute"; 
  } 
  catch (int i) { // catch an error 
    cout << "Caught an exception -- value is: "; 
    cout << i << "\n"; 
  } 
 
  cout << "end"; 
 
  return 0; 
}