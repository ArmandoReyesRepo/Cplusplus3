// Add a constructor to TwoDShape. 
 
#include <iostream> 
#include <cstring> 
using namespace std; 
 
// A class for two-dimensional objects. 
class TwoDShape { 
  // these are private 
  double width; 
  double height; 
public: 
 
  // Default constructor. 
  TwoDShape() { 
    width = height = 0.0; 
  } 
 
  // Constructor for TwoDShape. 
  TwoDShape(double w, double h) { 
    width = w; 
    height = h; 
  } 
 
  // Construct object with equal width and height. 
  TwoDShape(double x) { 
    width = height = x; 
  } 
 
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
  char style[20]; // now private 
public: 
 
  /* A default constructor. This automatically invokes 
     the default constructor of TwoDShape. */ 
  Triangle() { 
    strcpy(style, "unknown"); 
  } 
 
  // Constructor with three parameters. 
  Triangle(char *str, double w, 
           double h) : TwoDShape(w, h) { 
    strcpy(style, str); 
  } 
   
  // Construct an isosceles triangle. 
  Triangle(double x) : TwoDShape(x) { 
    strcpy(style, "isosceles");  
  } 
 
  double area() { 
    return getWidth() * getHeight() / 2; 
  } 
 
  void showStyle() { 
    cout << "Triangle is " << style << "\n"; 
  } 
}; 
 
int main() { 
  Triangle t1; 
  Triangle t2("right", 8.0, 12.0); 
  Triangle t3(4.0); 
 
  t1 = t2; 
 
  cout << "Info for t1: \n"; 
  t1.showStyle(); 
  t1.showDim(); 
  cout << "Area is " << t1.area() << "\n"; 
 
  cout << "\n"; 
 
  cout << "Info for t2: \n"; 
  t2.showStyle(); 
  t2.showDim(); 
  cout << "Area is " << t2.area() << "\n"; 
 
  cout << "\n"; 
 
  cout << "Info for t3: \n"; 
  t3.showStyle(); 
  t3.showDim(); 
  cout << "Area is " << t3.area() << "\n"; 
 
  cout << "\n"; 
 
  return 0; 
}