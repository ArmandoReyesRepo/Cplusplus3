// Refer to static variable through its class name. 
 
#include <iostream> 
using namespace std; 
 
class Test 
{ 
public: 
  static int num; 
  void shownum() { cout << num << endl; } 
}; 
 
int Test::num; // define num 
 
int main() 
{ 
  Test a, b; 
 
  // Set num through its class name. 
  Test::num = 100; 
 
  a.shownum(); // prints 100 
  b.shownum(); // prints 100 
 
  // Set num through an object. 
  a.num = 200; 
 
  a.shownum(); // prints 200 
  b.shownum(); // prints 200 
 
  return 0; 
} 