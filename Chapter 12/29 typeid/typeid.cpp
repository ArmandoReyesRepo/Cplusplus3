// A simple example that uses typeid. 
 
#include <iostream> 
#include <typeinfo> 
using namespace std; 
 
class MyClass 
{ 
  // ... 
}; 
 
int main() 
{ 
  int i, j; 
  float f; 
  MyClass ob; 
 
  cout << "The type of i is: " << typeid(i).name(); 
  cout << endl; 
  cout << "The type of f is: " << typeid(f).name(); 
  cout << endl; 
  cout << "The type of ob is: " << typeid(ob).name(); 
  cout << "\n\n"; 
 
  if(typeid(i) == typeid(j)) 
    cout << "The types of i and j are the same\n"; 
 
  if(typeid(i) != typeid(f)) 
    cout << "The types of i and f are not the same\n"; 
	system ("pause");
 
  return 0; 
}