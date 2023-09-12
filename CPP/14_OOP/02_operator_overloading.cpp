#include <iostream>
using namespace std;

//operator overloading -> we can overload an operator as long as we
//are operating on user-defined types like objects and structures.

//we cannot use operator overloading for basic types such as int, double, etc.

class Count{
  int value;

  public:
  Count(){
    value = 10;
  }

  //operator overloading...using "operator" keyword and then the operator that we want to overload
  void operator ++ (){
    value = value + 12;
  }

  void display(){
    cout << "count : " << value << endl;
  }
};

int main(){

  Count count1;
  ++count1;
  count1.display();

}