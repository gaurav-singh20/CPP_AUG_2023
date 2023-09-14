#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World";
    str1[0] = 'h';
    cout << str1 << endl;
    str2[0] = 'n';
    cout << str2 << endl;
    return 0;
}