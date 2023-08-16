#include <iostream>
using namespace std;

/*
-struct is a collection of user defined data types stored at different memory location.
-not memory efficient.

-union is a collection of user defined data types stored at same memory location.
-union can only hold one member value at time.
-memory efficient.
*/
union car{
  char name[20];
  int price;
};

struct bike{
  char name[20];
  int price;
};

int main(){
  car car1;
  bike bike1;

  cout << sizeof(car1) << endl; //union takes the size of the heighest size consuming variable.
  cout << sizeof(bike1) << endl; //takes the memory of sum of all the variables that struct holding
}