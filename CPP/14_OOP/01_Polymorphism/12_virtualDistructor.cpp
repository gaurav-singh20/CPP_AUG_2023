#include <iostream>
using namespace std;

class Base{
  public:
  Base(){
    cout << "Constructor of Base class" << endl;
  }

  ~Base(){
    cout << "Distructor of Base class" << endl;
  }

};

class Child : public Base{
  public:
  Child(){
    cout << "Constructor of Child class" << endl;
  }

  ~Child(){
    cout << "Distructor of Child class" << endl;
  }

};

int main(){
  Child* ch = new Child();
  cout << "----------" << endl;
  Base* base = ch;
  cout << "----------" << endl;
  delete base;
  cout << "----------" << endl;
  delete ch;

}

//we have used parent class(Base) and a derived class (child), inside which both constructors and destructor are eifned