#include <iostream>
#include <vector>
using namespace std;

//vectors are used to store elements of similar data types.
//unlike array, the size of a vector can grow dynamically.

int main(){
  //int arr[3] = {1,2,3};
  vector<int> vector1 = {1,2,3,4,5};

  for(int i : vector1){     //for each loop
    cout << i << " ";
  }
  cout << endl;
  
  //Add element
  vector1.push_back(6);
  vector1.push_back(7);
  
  cout << "after adding elements" << endl;
  for(int i : vector1){     
    cout << i << " ";
  }
  cout << endl;

  //access
  //cout << "Element at 1 is:" << vector1.at(1) <<endl;

  //Delete
  vector1.pop_back();
  cout << "after deletion" << endl;
  for(int i : vector1){     
    cout << i << " ";
  }
  cout << endl;
}