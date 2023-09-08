#include <iostream>
#include <string>
using namespace std;

int main(){
    // int myInteger=5; // int x=5 is initialisation and int x is decelaration
    // // myInteger=10
    // int y;
    // double myDouble=5.5; 
    // float my_float= 10.5;
    // char myChar='a';
    // string myString= "Hello";
    // bool myBool = true;


    // cout << myInteger << endl;
    // cout << y << endl; //it will give garbage value
    // cout << myDouble << endl;
    // cout << my_float << endl;
    // cout << myChar << endl;
    // cout << myString << endl;
    // cout << myBool << endl; //it will give 1

    string userInput;

    cout << "Enter your name:";

    //cin >> userInput; //it will take only one word cause space will work as an null char
    getline(cin,userInput);
    cout << "Your name is:" << userInput << endl;
}