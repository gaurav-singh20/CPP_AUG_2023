#include <iostream>
using namespace std;

int main(){

    //for(initialization,termination,incrementation)
    // for(int i=1;i<=10;i++){
    //     cout << i << endl;
    // }

    // for(int i=100;i>1;i-=2){
    //     cout << i << endl;
    // }

    //nested for loop
    // for(int i=0;i<=5;i++){
    //     for(int j=0;j<=3;j++){
    //         cout << i << " " << j << endl;
    //     }
    // }

    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=3;j++){
    //         cout << "*";
    //     }
    // cout << endl;
    // }

    int row,col;
    cout << "Enter no. of rows : ";
    cin >> row;
    cout << "Enter no. of cols : ";
    cin >> col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i == 1 || i == row || j == 1 || j == col){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}