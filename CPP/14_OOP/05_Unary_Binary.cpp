#include <iostream>
using namespace std;

/*
  unary operator-
  -operators which works on a single operand
  -e.g -> ++, --

  Binary operator-
  -operators which works on a two operand
  -e.g -> +, -
*/

class UnaryOverload{
  int hr, min;

  public:
  void input(){
    
    cout << "Enter the time : " ;
    cin >> hr;
    cout << endl;
    cin >> min;
  }

  void operator ++(int){
    hr++;
    min++;
  }

  void operator --(int){
    hr--;
    min--;
  }

  void output(){
    cout << "This is : " << hr << " hr " << min << " min ";
  }
};

int main(){
  UnaryOverload obj;
  obj.input();
  obj++;
  cout << "After Increament : " << endl;
  obj.output();

  obj--;
  cout << "After Increament : " << endl;
  obj.output();
}