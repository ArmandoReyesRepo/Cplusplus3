// Use read() and write(). 
 
#include <iostream> 
#include <fstream> 
using namespace std; 
 
int main() 
{ 
  int n[5] = {1, 2, 3, 4, 5}; 
  register int i; 
 
  ofstream out("test", ios::out | ios::binary); 
  if(!out) 
  { 
    cout << "Cannot open file.\n"; 
    return 1; 
   } 
 
  out.write((char *) &n, sizeof n); 
 
  out.close(); 
 
  for(i=0; i<5; i++) // clear array 
    n[i] = 0; 
 
  ifstream in("test", ios::in | ios::binary); 
  if(!in) 
  { 
    cout << "Cannot open file.\n"; 
    return 1; 
  } 
 
  in.read((char *) &n, sizeof n); 
 
  for(i=0; i<5; i++) // show values read from file 
    cout << n[i] << " "; 
 
  in.close(); 
 
  return 0; 
}