// #include <iostream>
// using namespace std;

// int myProd(int num1, int num2){
//     return num1*num2;    
// }

// int main(){
//     int n1,n2;
//     cout << "enter n1: ";
//     cin >> n1;
//     cout << "enter n2: ";
//     cin >> n2;
//     cout << myProd(n1,n2);
// }



#include <iostream>
using namespace std;

int max_num(int num1,int num2,int num3){
    if(num1>num2 && num1>num3){
        return num1;
    }
    else if(num2>num3){
        return num2;
    }
    else{
        return num3;
    }
}

int main(){
    int n1,n2,n3;
    cout << "enter n1 : ";
    cin >> n1;
    cout << "enter n2 : ";
    cin >> n2;
    cout << "enter n3 : ";
    cin >> n3;
    cout << "max no. is : " << max_num(n1,n2,n3) << endl;
    cout << "end" << endl;
}