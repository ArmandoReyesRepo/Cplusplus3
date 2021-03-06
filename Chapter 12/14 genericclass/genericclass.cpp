// A simple generic class. 
 
#include <iostream> 
using namespace std; 
 
template <class T> class MyClass 
{ 
  T x, y; 
public: 
  MyClass(T a, T b) 
  {  
    x = a; 
    y = b; 
  } 
  T div() { return x/y; } 
}; 
 
int main() 
{ 
  // Create a version of MyClass for doubles. 
  MyClass<double> d_ob(10.0, 3.0 ); 
  cout << "double division: " << d_ob.div() << "\n"; 
 
  // Create a version of MyClass for ints. 
  MyClass<int> i_ob(10, 3); 
  cout << "integer division: " << i_ob.div() << "\n"; 
 
  return 0; 
}