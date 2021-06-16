// Write to file. 
 
#include <iostream> 
#include <fstream> 
using namespace std; 
 
int main() 
{ 
  ofstream out("test"); 
  if(!out) 
  { 
    cout << "Cannot open file.\n"; 
    return 1; 
   } 
 
  out << 10 << " " << 123.23 << "\n"; 
  out << "This is a short text file."; 
 
  out.close(); 
 
  return 0; 
}
