#include <iostream>
using namespace std;

class Animal{
  string type;
  public:
  Animal() : type("Animal"){};
  // Animal(){
  //   type="Animal";
  // }

  virtual string getType(){
    return type;
  }
};

class Dog: public Animal{
  public:
  string type;
  Dog() : type("Dog"){};

  string getType() override{
    return type;
  }

};

class Cat: public Animal{
  public:
  string type;
  Cat() : type("Cat"){};

  string getType() override{
    return type;
  }

};

void print(Animal* animal){
  cout << "Animal Type: " << animal->getType() << endl;
}

int main(){
  Animal* animal1 = new Animal();
  Dog* dog1 = new Dog();
  Cat* cat1 = new Cat();
  
  print(animal1);
  print(dog1);
  print(cat1);
}