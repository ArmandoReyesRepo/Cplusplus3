// Display a file using get(). 
 
#include <iostream> 
#include <fstream> 
using namespace std; 
 
int main(int argc, char *argv[]) 
{ 
  char ch; 
 
  if(argc!=2) 
  { 
    cout << "Usage: PR <filename>\n"; 
    return 1; 
  } 
 
  ifstream in(argv[1], ios::in | ios::binary); 
  if(!in) 
  { 
    cout << "Cannot open file.\n"; 
    return 1; 
  } 
 
  while(in) 
  { // in will be false when eof is reached 
    in.get(ch); 
    if(in) cout << ch; 
  } 
 
  in.close(); 
  system ("pause");
 
  return 0; 
}
