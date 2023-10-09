#include <iostream>
using namespace std;

/*
Pure virtual function- A function for which we do not have an implementation. We do not Wrtie any functionality in ti, we only declare this function.

Any class containing one or more pure virtual function can not be used to define any object.

These classes are also known as abstract classes.

Classes derived from abstract classes nedd to impliment the pure virtual function.

syntaX: virtual <function_type> <function_name> =0;
*/

class Shape{
    public:
    virtual float calculate_area() = 0;
};

class Square : public Shape{
    float a;
    public:

    Square(float x){
        a = x;
    }

    float calculate_area() override{
        return a*a;
    }
};

int main(){
    Square s1(4);
    Shape* d = &s1;
    cout << d->calculate_area();
}