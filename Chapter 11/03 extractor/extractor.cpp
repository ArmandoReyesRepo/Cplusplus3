// Demonstrate a custom extractor. 
 
#include <iostream> 
using namespace std; 
 
class ThreeD 
{ 
  int x, y, z; // 3-D coordinates 
public: 
  ThreeD(int a, int b, int c) { x = a; y = b; z = c; } 
  friend ostream &operator<<(ostream &stream, ThreeD obj); 
  friend istream &operator>>(istream &stream, ThreeD &obj); 
} ; 
 
// Display X, Y, Z coordinates - ThreeD inserter. 
ostream &operator<<(ostream &stream, ThreeD obj) 
{ 
  stream << obj.x << ", "; 
  stream << obj.y << ", "; 
  stream << obj.z << "\n"; 
  return stream; // return the stream 
} 
 
// Get three dimensional values - ThreeD extractor. 
istream &operator>>(istream &stream, ThreeD &obj) 
{ 
  cout << "Enter X,Y,Z values: "; 
  stream >> obj.x >> obj.y >> obj.z; 
  return stream; 
} 
 
int main() 
{ 
  ThreeD a(1, 2, 3); 
 
  cout << a; 
 
  cin >> a; 
  cout << a; 
 
  return 0; 
}