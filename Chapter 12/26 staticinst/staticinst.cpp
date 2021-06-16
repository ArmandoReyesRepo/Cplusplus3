// Use a static instance variable. 
 
#include <iostream> 
using namespace std; 
 
class ShareVar 
{ 
  static int num; 
public: 
  void setnum(int i) { num = i; }; 
  void shownum() { cout << num << " "; } 
}; 
 
int ShareVar::num; // define num 
 
int main() 
{ 
  ShareVar a, b; 
 
  a.shownum(); // prints 0 
  b.shownum(); // prints 0 
 
  a.setnum(10); // set static num to 10 
 
  a.shownum(); // prints 10 
  b.shownum(); // also prints 10 
 
  return 0; 
}