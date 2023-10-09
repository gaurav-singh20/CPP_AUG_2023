#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value 
int count=0;

class num{
  public:
  num(){
    count++;
    cout<<"This is thetime whenconstructor iscalled for objectnumber"<<count<<endl;
  }

  ~num(){
    cout<<"This is thetime when mydestructor is calledfor objectnumber"<<count<<endl;
    count--;
  }
};

int main(){
  cout<<"We are inside our main function"<<endl;
  cout<<"Creating first object n1"<<endl;
  num n1;
  {
    cout<<"Entering this block"<<endl;
    cout<<"Creating two more objects"<<endl;
    num n2, n3;
    cout<<"Exiting this block"<<endl;
  }
  cout<<"Back to main"<<endl;
  return 0;
}
