//A constructor is a special type of member function that is called automatically when an object is created.
//constructor's name is same as the class name
//constructor is an method but without any return type value.

//default constructor has no parameters, however input arguments are available for parametrized constructors and copy constructors.

#include <iostream>
using namespace std;

class Student{
  public:
  string name;
  int age;
  string gender;

  Student(){
    cout << "Test" << endl;
  }

  Student(string myName, int myAge){
    name = myName;
    age = myAge;
  }
};

int main(){
  Student s1("Gaurav",20);

  cout << s1.name << endl;
  cout << s1.age << endl;
  Student s2;
}