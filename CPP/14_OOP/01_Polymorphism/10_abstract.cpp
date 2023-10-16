#include <iostream>
using namespace std;

/*
abstract class refers to a class containing atleast one pure virtual function, which cannot be instantiated.

charecteristics- 
1.abstract class must have atleast one pure virtual function.
2.abstract classes cannot be instantiated, but pointer and references of abstract class types can be cerated. we cannot create object of an abstract class.
3. classes that inherits the abstract class must implement all pure function.
*/

// class Shape{
  // public:
  // int shape_width;
  // int shape_height;
  // void width(int w){
  //   shape_width = w;
  // }
  // void height(int h){
  //   shape_height = h;
  // }
  // int perimeterOfSquare(int side){
  //   return 4*side;
  // }
  // int perimeterOfRect(int l, int b){
  //   return 2*(l+b);
  // }
  //all the functionS of square and rectangle are clumbed in a single class.
// };

class Shape{
  public:
  int shape_width;
  int shape_height;

  void width(int w){
    shape_width = w;
  }
  
  void height(int h){
    shape_height = h;
  }
  
  int perimeterOfSquare(int side){
    return 4*side;
  }
  
  int perimeterOfRect(int l, int b){
    return 2*(l+b);
  }
  
  virtual int perimeter() = 0;
};

class Rectangle : public Shape{
  public:
  int perimeter(){
    return 2*(shape_height + shape_width);
  }
};

class Square : public Shape{
  public:
  int perimeter(){
    return 4*shape_width;
  }
};

int main(){
  Rectangle r1;
  Square s1;

  r1.width(10);
  r1.height(5);
  s1.width(12);

  cout << r1.perimeter();
}