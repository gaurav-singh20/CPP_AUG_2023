#include <iostream>
using namespace std;

/*
  Tower of hanoio:
  -there are three tower - source, auxilary, destination
  -source tower contains a set of disks stacked, with the largest at the bottom and the smallest at top.
  -the objective is to transfer the entire disks from source to cestination tower maintaining the same order of the disks, using auxilary tower.

  Rules:
  -only one disk can be tranfered at a time.
  -never a larger disk is placed on a smaller disk during the transfer
*/

void towerOfHanoi(int n, char src, char aux, char dest){
  if(n==1){
    cout << "Move disk- " << n << " from " << src << " to " << dest << endl;
    return;
  }

  towerOfHanoi(n-1,src,dest,aux);
  cout << "Move disk- " << n << " from " << src << " to " << dest << endl;
  towerOfHanoi(n-1,aux,src,dest);

}

int main(){
  int n;
  cout << "Enter the number of disks:";
  cin>>n;
  towerOfHanoi(n,'A','B','C');
}
