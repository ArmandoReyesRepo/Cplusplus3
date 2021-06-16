// Demonstrate public inheritance. 
 
#include <iostream> 
using namespace std; 
 
class B 
{ 
  int i, j; 
public: 
  void set(int a, int b) { i = a; j = b; } 
  void show() { cout << i << " " << j << "\n"; } 
}; 
 
class D : public B 
{ 
  int k; 
public: 
  D(int x) { k = x; } 
  void showk() { cout << k << "\n"; } 
 
  // i = 10; // Error! i is private to B and access is not allowed. 
}; 
 
int main() 
{ 
  D ob(3); 
 
  ob.set(1, 2); // access member of base class 
  ob.show();    // access member of base class 
 
  ob.showk();   // uses member of derived class 
 
  return 0; 
}