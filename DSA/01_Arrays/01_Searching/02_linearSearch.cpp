/*You are given an array of integers, arr, containing n elements. Write a C++ function int 
linearSearch(int arr[], int n, int target) to perform a linear search and find the index of the first 
occurrence of the target element within the array. If the target element is not found, the function 
should return -1.*/

// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int n, int target){
//   for(int i=0;i<n;i++){
    
//   }
// }

// int main(){

// }

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i=0;i<n;i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[5];

    cout << "enter emlements: " <<endl;
    for(int i=0;i<5;i++){
    cin >> arr[i];
    }
    int target = 5;
    int index = linearSearch(arr, 9, target);
    cout << index;
}