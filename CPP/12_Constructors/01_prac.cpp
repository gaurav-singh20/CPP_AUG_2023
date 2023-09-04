/*Write a C++ class called "Employee" that has three private member variables: "name", "salary", and "employeeCode". 
The class should have a constructor that initializes these member variables and a public member function called "displayInfo" 
that prints out the employee's name, salary, and employeeCode.*/

#include <iostream>
using namespace std;

class Employee{
  string name;
  int salary;
  int employeeCode;
  
  Employee(){

  }
  public:

  Employee(string eName,int eSalary,int eId){
    name = eName;
    salary = eSalary;
    employeeCode = eId;
  }

  void displayInfo(){
    cout << name << endl;
    cout << salary << endl;
    cout << employeeCode << endl;
  }

};

int main(){
  Employee e1("gaurav",500000,12223699);
  e1.displayInfo();
}