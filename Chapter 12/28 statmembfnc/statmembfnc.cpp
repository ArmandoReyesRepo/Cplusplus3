// Demonstrate a static member functions. 
 
#include <iostream> 
using namespace std; 
 
class Test 
{ 
  static int count; 
public: 
 
  Test() 
  { 
    count++; 
    cout << "Constructing object " << 
             count << endl; 
  } 
 
  ~Test() 
  { 
     cout << "Destroying object " <<  
             count << endl; 
     count--; 
  } 
  
  static int numObjects() { return count; } 
}; 
 
int Test::count; 
 
int main() 
{ 
  Test a, b, c; 
 
  cout << "There are now " << 
          Test::numObjects() << 
          " in existence.\n\n"; 
 
  Test *p = new Test(); 
 
  cout << "After allocating a Test object, " << 
          "there are now " << 
          Test::numObjects() << 
          " in existence.\n\n"; 
 
  delete p; 
 
  cout << "After deleting an object, " << 
          " there are now " << 
          a.numObjects() << 
          " in existence.\n\n"; 
 
  return 0; 
}