#include <iostream>
using namespace std;

//find min element in entire array and place it at it's correct index

void selectionSort(int arr[], int size){
    for(int i = 0; i < size-1; i++){

        int minEleIndex = i;
        for(int j = i+1; j < size; j++){
            if(arr[j] < arr[minEleIndex]){
                minEleIndex = j;
            }
        }
        swap(arr[minEleIndex], arr[i]);
        for(int i = 0; i < 9;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int arr[9] = {5,3,7,2,4,6,9,1,8};

    selectionSort(arr, 9);

    for(int i = 0; i < 9;i++){
        cout << arr[i] << " ";
    }
}