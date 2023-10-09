#include <iostream>
using namespace std;

//Polymorphia -> Poly = many, Murph = forms
//two type - compile time and run time polymorphism
//same entity (function or operator) behaves deifferently in different scenarios.
//eg. for compile time overloading - function overloading, operator overloading
//run time polymorphism - function overriding (using vertual function)

//function overloading
//it is a COMPILE TIME POLYMORPHISM because the compiler knows
//which function to execute before the program is compiled.
int sum(int num1,int num2){
  return num1 + num2;
}

double sum(double num1,double num2){
  return num1 + num2;
}

int sum(int num1,int num2,int num3){
  return num1 + num2 + num3;
}

int main(){
  // int a = 5;
  // int b =10;

  // int c = a+b;
  // cout << c <<endl;



  // string x = "Hello";
  // string y = " World f";
  // // string ab;
  // // cin >> ab;
  // // cout << ab << endl;
  // // cout << y << endl;
  // string z = x+y;
  // cout << z;

  // ------------------------------------------------------------

  cout << sum(2,3) << endl;  //func 1 called
  cout << sum(2.2,3.3) << endl;  //func 2 called
  cout << sum(2,3,4) << endl;  //func 3 called

}


//-----------------------------------------------------------------

/*
rules for operator overloading
  -atleast one of the operand must be a user defined class object
  -we can only overload existing operators
  -some operators cannot be overloaded
     eg. ?: , :: , . ,
*/