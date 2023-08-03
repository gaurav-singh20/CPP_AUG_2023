#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the marks : " << endl;
    cin >> num;

    if(num<0 || num>100){
        cout << "Invalid Input" << endl;
    }

    else if(num <= 100 && num >90){
        cout << "Excellent" << endl;
    }

    else if(num <= 90 && num >80){
        cout << "Very Good" << endl;
    }

    else if(num <= 80 && num >70){
        cout << "Good" << endl;
    }

    else if(num <= 70 && num >60){
        cout << "Average" << endl;
    }

    else if(num <= 60 && num >50){
        cout << "Can do Better" << endl;
    }

    else {
        cout << "Study" << endl;
    }
}