// Demonstrate an I/O manipulator. 
 
#include <iostream> 
#include <iomanip> 
using namespace std; 
 
int main() 
{ 
  cout << setprecision(2) << 1000.243 << endl; 
  cout << setw(20) << "Hello there."; 
 
  return 0; 
}
