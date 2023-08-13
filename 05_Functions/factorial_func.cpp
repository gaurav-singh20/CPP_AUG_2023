#include<iostream>
using namespace std;

int main(){
  int num,fact=1;
  cin >> num;
  for(;num>0;num--){
      fact*=num;
  }
  cout << fact;
}