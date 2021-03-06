// Use virtual functions and polymorphism. 
 
#include <iostream> 
#include <cstring> 
using namespace std; 
 
// A class for two-dimensional objects. 
class TwoDShape 
{ 
  // these are private 
  double width; 
  double height; 
 
  // add a name field 
  char name[20]; 
public: 
 
  // Default constructor. 
  TwoDShape() 
  { 
    width = height = 0.0; 
    strcpy(name, "unknown"); 
  } 
 
  // Constructor for TwoDShape. 
  TwoDShape(double w, double h, char *n) 
  { 
    width = w; 
    height = h; 
    strcpy(name, n); 
  } 
 
  // Construct object with equal width and height. 
  TwoDShape(double x, char *n) 
  { 
    width = height = x; 
    strcpy(name, n); 
  } 
 
  void showDim() 
  { 
    cout << "Width and height are " << 
             width << " and " << height << "\n"; 
  } 
 
  // accessor functions 
  double getWidth() { return width; } 
  double getHeight() { return height; } 
  void setWidth(double w) { width = w; } 
  void setHeight(double h) { height = h; } 
  char *getName() { return name; } 
 
  // Add area() to TwoDShape and make it virtual. 
  virtual double area() 
  {   
    cout << "Error: area() must be overridden.\n";  
    return 0.0;  
  }   
 
}; 
 
// Triangle is derived from TwoDShape. 
class Triangle : public TwoDShape 
{ 
  char style[20]; // now private 
public: 
 
  /* A default constructor. This automatically invokes 
     the default constructor of TwoDShape. */ 
  Triangle() 
  { 
    strcpy(style, "unknown"); 
  } 
 
  // Constructor with three parameters. 
  Triangle(char *str, double w, 
           double h) : TwoDShape(w, h, "triangle") 
  { 
    strcpy(style, str); 
  } 
   
  // Construct an isosceles triangle. 
  Triangle(double x) : TwoDShape(x, "triangle") 
  { 
    strcpy(style, "isosceles");  
  } 
 
  // This now overrides area() declared in TwoDShape. 
  double area() 
  { 
    return getWidth() * getHeight() / 2; 
  } 
 
  void showStyle() 
  {
    cout << "Triangle is " << style << "\n"; 
  } 
}; 
 
// A derived class of TwoDShape for rectangles. 
class Rectangle : public TwoDShape 
{ 
public: 
 
  // Construct a rectangle.  
  Rectangle(double w, double h) :  
    TwoDShape(w, h, "rectangle") { }  
  
  // Construct a square.  
  Rectangle(double x) :  
    TwoDShape(x, "rectangle") { }  
 
  bool isSquare() 
  { 
    if(getWidth() == getHeight()) return true; 
    return false; 
  } 
 
  // This is another override of area().   
  double area() 
  { 
    return getWidth() * getHeight(); 
  } 
}; 
 
int main() { 
  // declare an array of pointers to TwoDShape objects. 
  TwoDShape *shapes[5]; 
  
  shapes[0] = &Triangle("right", 8.0, 12.0);  
  shapes[1] = &Rectangle(10);  
  shapes[2] = &Rectangle(10, 4);  
  shapes[3] = &Triangle(7.0);  
  shapes[4] = &TwoDShape(10, 20, "generic"); 
  
  for(int i=0; i < 5; i++) 
  {  
    cout << "object is " << 
            shapes[i]->getName() << "\n";  
 
    cout << "Area is " << 
            shapes[i]->area() << "\n";  
  
    cout << "\n";    
  }  
 
  return 0; 
}