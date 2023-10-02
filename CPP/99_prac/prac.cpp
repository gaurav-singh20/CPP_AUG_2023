#include <iostream>
using namespace std;
class MyClass {
public:
    int num;

    MyClass() {
        num = 10;
    }

    MyClass(const MyClass& other) {
        num = other.num * 2;
    }
};

int main() {
    MyClass obj1;
    MyClass obj2 = obj1;
    cout << obj2.num;
    return 0;
}