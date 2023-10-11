#include <iostream>
using namespace std;

void printSpiral(int arr[][4],int col, int row){
    int topRow=0, bottomRow = row-1;
    int leftCol = 0, rightCol = col-1;
    while(topRow<=bottomRow && leftCol<=rightCol){
        //print topmost row
        for(int i=leftCol;i<=rightCol;i++){
            cout << arr[topRow][i] << " ";
        }
        topRow++;
        
        //print rightmost col
        for(int i=topRow;i<=bottomRow;i++){
            cout << arr[i][rightCol] << " ";
        }
        rightCol--;
        
        for(int i=rightCol;i>=leftCol;i--){
            cout << arr[bottomRow][i] << " ";
        }
        bottomRow--;
        
        for(int i=bottomRow;i>=topRow;i--){
            cout << arr[leftCol][i] << " ";
        }
        leftCol++;
        
    }
}

int main(){

}