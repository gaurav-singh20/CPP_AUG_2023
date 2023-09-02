#include<iostream>
using namespace std;
class class_B; //forward declaration

class class_A {
    int data;

public:
    void setValue(int val) {
        data = val;
    }
    friend void add(class_A, class_B);     // B doesn't exits as of now so compiler shows error without forward declaration
};

class class_B {
    int data;

public:
    void setValue(int val) {
        data = val;
    }
    friend void add(class_A, class_B);
};

void add(class_A obj1, class_B obj2) {
    cout << "The sum is: " << obj1.data + obj2.data;
}

int main() {
    class_A a1;
    class_B b1;
    a1.setValue(10);
    b1.setValue(20);
    add(a1, b1);
}

// #include<iostream>
// using namespace std;

// class A{
//     int data;
//     void setValue(int val) {
//         data = val;
//     }
//     friend void setValue(A obj);
// };


// void setValue(A obj1) {
//     cout << obj1.data;
// }

// int main() { 
    
// }