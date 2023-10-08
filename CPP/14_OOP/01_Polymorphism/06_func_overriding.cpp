#include <iostream>
using namespace std;

class Base{
  public:
  virtual void print(){
    cout << "From Base" << endl;
  }
};

class Derived : public Base{
  public:
  void print(){
    cout << "From Derived" << endl;
  }
};

int main(){
  Derived d1;
  // d1.print();

  Base* b1 = &d1; //dynamic object
  //purpose - directly accessing functions of child class with the help of base class.
  b1->print();
}



//run time polymorphism - function overriding.

//we have same function in base class as well as derived class,when we call the function using the object of derived class, the function of derived class is executeed instead of the base class.

//when we class print using d1, it overrides the print() of base class.
//It's a runtime polymorphism because the function call is not resolved by the compiler, but it is resolved at runtime isnstead.