#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){

    for(int i = 0; i < size-1; i++){

        bool swapped = false;
        for(int j = 0; j < size - i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
                for(int i = 0; i < 9; i++){
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            
        }

        if(swapped = false){
            break;
        }

        // for(int i = 0; i < 9; i++){
        //     cout << arr[i] << " ";
        // }
        // cout << endl;
    }

}

int main(){
    int arr[9] = {5,3,7,2,4,6,9,1,8};

    bubbleSort(arr,9);

    for(int i = 0; i < 9; i++){
        cout << arr[i] << " ";
    }
}