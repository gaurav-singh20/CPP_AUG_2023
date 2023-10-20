#include <iostream>
using namespace std;

class Stack{
  int* arr;
  int top;

  public:
  int size;
  Stack(){
    arr = new int[size];
    top=-1;
  }

  void push(int val){
    if(top>(size-1)){
      cout << "stack bhara hai" << endl;
      return;
    }
    top++;
    arr[top]=val;
  }

  void pop(){
    if(top==-1){
      cout << "khali hai pehle se" << endl;
      return;
    }
    top--;
  }

  int Top(){
    if(top==-1){
      cout << "kuch nhi hai dikhane ko" << endl;
      return -1;
    }
    cout << arr[top] << endl;
  }
};

int main(){
  Stack s1;
  s1.size=5;
  s1.push(3);
  s1.push(4);
  s1.pop();
  s1.pop();
  s1.Top();
}
