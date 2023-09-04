/* Write a C++ class called "Rectangle" that has two private member variables: "length" and "width". 
The class should have a constructor that initializes these member variables and public member functions 
called "getArea" and "getPerimeter" that return the rectangle's area and perimeter, respectively.*/

#include <iostream>
using namespace std;

class Rectangle{
  int length, width;
  
  Rectangle(){

  }
  public:

  Rectangle(int rlen,int rwid){
    length = rlen;
    width = rwid;
  }

  void getArea(){
    cout << length*width <<endl;
  }

  void getParameter(){
    cout << 2*(length + width) <<endl;
  }

};

int main(){
  Rectangle r1(10,20);
  r1.getArea();
  r1.getParameter();
}