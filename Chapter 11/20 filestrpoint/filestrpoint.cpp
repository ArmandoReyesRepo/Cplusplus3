// Display a file from a given starting point. 
 
#include <iostream> 
#include <fstream> 
#include <cstdlib> 
using namespace std; 
 
int main(int argc, char *argv[]) 
{ 
  char ch; 
 
  if(argc!=3)
  { 
    cout << "Usage: NAME <filename> <starting location>\n"; 
    return 1; 
  } 
 
  ifstream in(argv[1], ios::in | ios::binary); 
  if(!in)
  { 
    cout << "Cannot open file.\n"; 
    return 1; 
  } 
 
  in.seekg(atoi(argv[2]), ios::beg); 
 
  while(in.get(ch)) 
    cout << ch; 
 
  return 0; 
}