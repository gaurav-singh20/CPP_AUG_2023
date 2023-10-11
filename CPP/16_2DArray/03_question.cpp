// #include <iostream>
// using namespace std;

// bool isPresent(int arr[][4],int target, int row, int col){
//   for(int row=0;row<3;row++){
//     for(int row=0;row<3;col++){

//     }

//   }
// }

// int main(){

// }

#include <iostream>
using namespace std;

int wavePrint(int arr[][4],int row,int col){
  for(int col=0;col<4;col++){
    if(col%2==1){
      for(int row=row-1;row>=0;row--){
        cout<<arr[row][col] << " ";
      }
    }
    else{
      for(int row=0;row<3;row++){
        cout<<arr[row][col] << " ";
      }
    }
  }
}

int main(){
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int max_sum = 0;
    
    // int max = 0;
    // for(int i=0; i<row; i++){
    //     int sum = 0;
    //     for(int j=0; j<col; j++){
    //         sum += arr[i][j];
    //     }
    //     if(sum > max){
    //         max = sum;
    //     }
    // }

    // for(int i=0; i<3; i++){
    //     int sum = 0;
    //     for(int j=0; j<4; j++){
    //         sum += arr[i][j];
    //     }
    //     if(sum > max_sum){
    //         max_sum = sum;
    //     }
    // }
    // cout << "Maximum sum of a row: " << max_sum << endl;
    // return 0;


}