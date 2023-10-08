#include <iostream>
using namespace std;


class Count{
  int value;

  public:
  Count(){
    value = 10;
  }

  void operator ! (){
    value = value + 12;
  }

  void display(){
    cout << "count : " << value << endl;
  }
};

int main(){

  Count count1;
  !count1;
  count1.display();

}