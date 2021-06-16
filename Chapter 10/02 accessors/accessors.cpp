// Access private data through accessor functions. 
 
#include <iostream> 
#include <cstring> 
using namespace std; 
 
// A class for two-dimensional objects. 
class TwoDShape { 
  // these are private 
  double width; 
  double height; 
public: 
 
  void showDim() { 
    cout << "Width and height are " << 
             width << " and " << height << "\n"; 
  } 
 
  // accessor functions 
  double getWidth() { return width; } 
  double getHeight() { return height; } 
  void setWidth(double w) { width = w; } 
  void setHeight(double h) { height = h; } 
}; 
 
// Triangle is derived from TwoDShape. 
class Triangle : public TwoDShape { 
public: 
  char style[20]; 
   
  double area() { 
    return getWidth() * getHeight() / 2; 
  } 
 
  void showStyle() { 
    cout << "Triangle is " << style << "\n"; 
  } 
}; 
 
int main() { 
  Triangle t1; 
  Triangle t2; 
 
  t1.setWidth(4.0); 
  t1.setHeight(4.0); 
  strcpy(t1.style, "isosceles"); 
 
  t2.setWidth(8.0); 
  t2.setHeight(12.0); 
  strcpy(t2.style, "right"); 
 
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