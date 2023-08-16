#include <iostream>
using namespace std;

enum season{summer,winter,autumn=30,spring};

int main(){
  season s1;
  s1 = spring;
  cout << s1 << endl;
  cout << winter <<endl;
  cout << autumn <<endl;
}