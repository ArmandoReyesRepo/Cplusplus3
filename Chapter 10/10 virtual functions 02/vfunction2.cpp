#include <iostream> 
using namespace std; 
 
class B 
{ 
public: 
  virtual void who() 
  { 
    cout << "Base\n"; 
  } 
}; 
 
class D1 : public B 
{ 
public: 
  void who() 
  { 
    cout << "First derivation\n"; 
  } 
}; 
 
class D2 : public B 
{ 
// who() not defined 
}; 
 
int main() 
{ 
  B base_obj; 
  B *p; 
  D1 D1_obj; 
  D2 D2_obj; 
 
  p = &base_obj; 
  p->who();  // access B's who() 
 
  p = &D1_obj; 
  p->who(); // access D1's who() 
 
  p = &D2_obj; 
  p->who(); /* access B's who() because 
               D2 does not redefine it */ 
 
  return 0; 
}
