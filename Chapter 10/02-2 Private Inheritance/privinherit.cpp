// Use private inheritance. This program won't compile. 
 
#include <iostream> 
using namespace std; 
 
class B 
{ 
  int i, j; 
public: 
  void set(int a, int b) { i = a; j = b; } 
  void show() { cout << i << " " << j << "\n"; } 
}; 
 
// Public elements of B become private in D. 
class D : private B 
{ 
  int k; 
public: 
  D(int x) { k = x; } 
  void showk() { cout << k << "\n"; } 
}; 
 
int main() 
{ 
  D ob(3); 
 
  ob.set(1, 2); // Error, can't access set() 
  ob.show();    // Error, can't access show() 
 
  return 0; 
}