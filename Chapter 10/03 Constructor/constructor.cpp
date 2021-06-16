// Add a constructor to Triangle. 
 
#include <iostream> 
#include <cstring> 
using namespace std; 
 
// A class for two-dimensional objects. 
class TwoDShape 
{ 
  // these are private 
  double width; 
  double height; 
public: 
  void showDim() { 
    cout << "Width and height are " << 
             width << " and " << height << "\n"; 
  } 
 
  // accessor functons 
  double getWidth() { return width; } 
  double getHeight() { return height; } 
  void setWidth(double w) { width = w; } 
  void setHeight(double h) { height = h; } 
}; 
 
// Triangle is derived from TwoDShape. 
class Triangle : public TwoDShape 
{ 
  char style[20]; // now private 
public: 
 
  // Constructor for Triangle. 
  Triangle(char *str, double w, double h) 
  { 
   // Initialize the base class portion. 
    setWidth(w); 
    setHeight(h); 
 
    // Initialize the derived class portion. 
    strcpy(style, str); 
  } 
   
  double area() 
  { 
    return getWidth() * getHeight() / 2; 
  } 
 
  void showStyle() 
  { 
    cout << "Triangle is " << style << "\n"; 
  } 
}; 
 
int main() 
{ 
  Triangle t1("isosceles", 4.0, 4.0); 
  Triangle t2("right", 8.0, 12.0); 
 
  cout << "Info for t1:\n"; 
  t1.showStyle(); 
  t1.showDim(); 
  cout << "Area is " << t1.area() << "\n"; 
 
  cout << "\n"; 
  cout << "Info for t2:\n"; 
  t2.showStyle(); 
  t2.showDim(); 
  cout << "Area is " << t2.area() << "\n"; 
 
  return 0; 
}