// Use put() to write to a file. 
 
#include <iostream> 
#include <fstream> 
using namespace std; 
 
int main() 
{ 
  char *p = "hello there\n"; 
 
  ofstream out("test1", ios::out | ios::binary); 
  if(!out) 
  { 
    cout << "Cannot open file.\n"; 
    return 1; 
   } 
 
  // Write characters until the null-terminator is reached. 
  while(*p) out.put(*p++); 
 
  out.close(); 
 
  return 0; 
}