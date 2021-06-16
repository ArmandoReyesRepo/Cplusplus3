// Example of "rethrowing" an exception. 
 
#include <iostream> 
using namespace std; 
 
void Xhandler() 
{ 
  try 
  { 
    throw "hello"; // throw a char * 
  } 
  catch(char *) 
  { // catch a char * 
    cout << "Caught char * inside Xhandler\n"; 
    throw ; // rethrow char * out of function 
  } 
} 
 
int main() 
{ 
  cout << "start\n"; 
 
  try
  { 
    Xhandler(); 
  } 
  catch(char *) 
  { 
    cout << "Caught char * inside main\n"; 
  } 
 
  cout << "end"; 
  system ("pause");
 
  return 0; 
}