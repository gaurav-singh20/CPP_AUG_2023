#include <iostream>
using namespace std;

/*
those classes/struct that contains one or more than one pointer as their number which will be pointing to the structure of the same type.

a class/struct that points to the class/struct of same type.

e.g. in LL trass
*/

//self referntial class with single link
class Node{
  public:
  int data;
  Node* next;
};

int main(){

  Node obj1;
  obj1.next = NULL;
  obj1.data = 1; 

  Node obj2;
  obj2.next = NULL;
  obj2.data = 2;

  obj1.next = &obj2;

  cout << obj1.next->data << endl;
}