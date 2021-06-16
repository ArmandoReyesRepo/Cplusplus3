// Use multiple catch statements. 
 
#include <iostream> 
using namespace std; 
 
// Different types of exceptions can be caught. 
void Xhandler(int test) 
{ 
  try
  { 
    if(test) throw test; // throw int 
    else throw "Value is zero"; // throw char * 
  } 
  catch(int i) 
  { 
    cout << "Caught One!  Ex. #: " << i << '\n'; 
  } 
  catch(char *str) 
  { 
    cout << "Caught a string: "; 
    cout << str << '\n'; 
  } 
} 
 
int main() 
{ 
  cout << "start\n"; 
 
  Xhandler(1); 
  Xhandler(2); 
  Xhandler(0); 
  Xhandler(3); 
 
  cout << "end"; 
  system ("pause");
 
  return 0; 
}