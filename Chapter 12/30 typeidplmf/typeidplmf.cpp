// An example that uses typeid on a polymorphic class heirarchy. 
 
#include <iostream> 
#include <typeinfo> 
using namespace std; 
 
class Base 
{ 
  virtual void f() {}; // make Base polymorphic 
  // ... 
}; 
 
class Derived1: public Base 
{ 
  // ... 
}; 
 
class Derived2: public Base 
{ 
  // ... 
}; 
 
int main() 
{ 
  Base *p, baseob; 
  Derived1 ob1; 
  Derived2 ob2; 
 
  p = &baseob; 
  cout << "p is pointing to an object of type "; 
  cout << typeid(*p).name() << endl; 
 
  p = &ob1; 
  cout << "p is pointing to an object of type "; 
  cout << typeid(*p).name() << endl; 
 
  p = &ob2; 
  cout << "p is pointing to an object of type "; 
  cout << typeid(*p).name() << endl; 
  system ("pause");
 
  return 0; 
}
