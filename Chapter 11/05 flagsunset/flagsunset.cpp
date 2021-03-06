// Demonstrate flags() and unsetf(). 
 
#include <iostream> 
using namespace std; 
 
int main() 
{ 
  ios::fmtflags f; 
 
  f = cout.flags(); 
 
  if(f & ios::showpos) 
    cout << "showpos is set for cout.\n"; 
  else 
    cout << "showpos is cleared for cout.\n"; 
 
  cout << "\nSetting showpos for cout.\n"; 
  cout.setf(ios::showpos); 
 
  f = cout.flags(); 
 
  if(f & ios::showpos) 
    cout << "showpos is set for cout.\n"; 
  else 
    cout << "showpos is cleared for cout.\n"; 
 
  cout << "\nClearing showpos for cout.\n"; 
  cout.unsetf(ios::showpos); 
 
  f = cout.flags(); 
 
  if(f & ios::showpos) 
    cout << "showpos is set for cout.\n"; 
  else 
    cout << "showpos is cleared for cout.\n"; 
 
  return 0; 
} 