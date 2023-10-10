#include <iostream>
using namespace std;

int printSum(int arr[][4],int row, int col){
  int sum=0;
  for(int row=0;row<3;row++){
    for(int col=0;col<4;col++){
      sum+=arr[row][col];
    }
    cout << endl;
  }
  return sum;
}



int main(){
  int arr[3][4];

  //taking input (row wise)
  for (int row=0;row<3;row++){
    for (int col=0;col<4;col++){
      cin>> arr[row][col];
    }
  }

  // //taking input column wise
  // for (int col=0;col<3;col++){
  //   for (int row=0;row<4;row++){
  //     cin>> arr[row][col];
  //   }
  // }

  //print
  for (int row=0;row<3;row++){
    for (int col=0;col<4;col++){
      cout << arr[row][col] << " ";
    }
    cout << endl;
  }

  cout << printSum(arr,3,3);

}