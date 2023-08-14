#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number between 1 and 3 : ";
    cin >> num;

    switch(num){
        case 1:
        //body of the case 1
        cout << "Number is 1" << endl;
        break;

        case 2:
        //body of the case 2
        cout << "Number is 2" << endl;
        break;

        case 3:
        //body of the case 3
        cout << "Number is 3" << endl;
        break;

        default:
        //body of the default
        cout << "Number is invalid" << endl;
    }
}