#include <iostream>
using namespace std;

int myProd(int num1, int num2){
    return num1*num2;    
}

int main(){
    int n1,n2;
    cout << "enter n1: ";
    cin >> n1;
    cout << "enter n2: ";
    cin >> n2;
    cout << myProd(n1,n2);
}
