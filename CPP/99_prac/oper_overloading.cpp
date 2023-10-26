#include <iostream>
using namespace std;

class Rectangle{
  public:
  int len, bre;

  Rectangle(int len, int bre){
    this->len=len;
    this->bre=bre;
  }

  void operator ++(){
    len=len+1;
    bre=bre+1;
  }

  int calculate(){
    cout << (len+bre)*2 << endl;
  }
};

int main(){
  int a,b;
  cin >> a >> b;
  Rectangle r1(a,b);
  ++r1;
  r1.calculate();
}