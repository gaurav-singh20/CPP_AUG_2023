// #include <iostream>
// using namespace std;

// int main(){

    // while(condition){
    //     execute
    // }

    // int i = 1;

    // while(i <= 10){
    //     cout << i << " ";
    //     i += 1;
    // }

    // while(i <= 5){
    //     int j = 1;
    //     while(j <= 5){
    //         cout << i << " " << j << endl;
    //         j++;
    //     }
    //     i++;
    // }

    // do{
    //     cout << i << endl;
    // }
    // while(i < 5);

// }


#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= n){
            // cout << col;
            cout << n - col + 1;
            col++;
        }
        cout << endl;
        row++;
    }

}