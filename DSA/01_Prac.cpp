#include <iostream>
using namespace std;

int main(){
  // int arr[]={1,2,3,4,5}, arr1[5];
  // for(int i=0;i<5;i++){
  //   arr1[i]=arr[4-i];
  // }
  // for(int i=0;i<5;i++){
  //   cout << arr1[i];
  // } 

  int arr[100],a,temp;
  cout << "enter array size: " << endl;
  cin >> a;

  cout << "enter emlements: " <<endl;
  for(int i=0;i<a;i++){
    cin >> arr[i];
  }

  for(int i=0;i<(a/2);i++){
    temp=arr[i];
    arr[i]=arr[a-1-i];
    arr[a-1-i]=temp;
  }
  
  cout << "reverse is: " <<endl;
  for(int i=0;i<a;i++){
    cout << arr[i];
  }
}