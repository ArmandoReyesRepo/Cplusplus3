// Demonstrate random access. 
 
#include <iostream> 
#include <fstream> 
#include <cstdlib> 
using namespace std; 
 
int main(int argc, char *argv[]) 
{ 
  if(argc!=3) 
  { 
    cout << "Usage: CHANGE <filename> <byte>\n"; 
    return 1; 
  } 
 
  fstream out(argv[1], ios::in | ios::out | ios::binary); 
  if(!out) 
  { 
    cout << "Cannot open file.\n"; 
    return 1; 
  } 
 
  out.seekp(atoi(argv[2]), ios::beg); 
 
  out.put('X'); 
  out.close(); 
 
  return 0; 
}
