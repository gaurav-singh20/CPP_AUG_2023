#include <iostream>
using namespace std;

//a virtual function is a member function in the base class that we expect to redefine in derived class.
// a virtual function is used in base classs in order to ensure that the function is overriden.
//This especially applies to cases where a pointer of base class points to an object of a derived class.

//OVERRIDES -
//the override identifier specifies the member functios of the derived class that overrides the member function of the base class.

//when using virtual function, it is possible to make mistake while declaring the member functions of the derived class.using Override identifier prompts the complier to display error.
//possible mistake- function with incorrect spelling/name,different parameters, different return types.


class Base{
  public:
  virtual void print(){
    cout << "Base" << endl;
  }
};

class Derived: public Base{
  public:
  void print() override{
    cout << "Derived" << endl;
  }
};

int main(){
  Derived d1;
  Base* b1= &d1;
  b1->print();
}