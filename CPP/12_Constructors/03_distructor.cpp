#include <iostream>
using namespace std;

/*destructor is used to destroy the object of a class when the 
scope of object ends
It has the same name as the class and starts with ~ (tilde)*/
//doesn't take any argument, nor return any value. 
class Person{
  public:
  Person(){
    cout << "Constructor called" << endl;
  }

  ~Person(){
    cout << "Destructor called" << endl;
  }
};

int main(){
  Person p1,p2;
}

//we can only have one destructor in a class
//A destructor cannot have parameters or return type
//We cannot define destructor in structs
//We cannot overload or inherit distructor
