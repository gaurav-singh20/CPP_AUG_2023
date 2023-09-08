#include <iostream>
#include <string>
using namespace std;

int main(){
    string userInput;

    cout << "Enter your name:";

    //cin >> userInput; //it will take only one word cause space will work as an null char
    getline(cin,userInput);
    cout << "Your name is:" << userInput << endl;
}