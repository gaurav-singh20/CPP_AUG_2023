#include <iostream>
using namespace std;

// int factorial(int n){
//   if(n<=1)
//   return 1;
//   return n * factorial(n-1);
// }

// int main(){
//   int num;
//   cin >> num;
//   cout << factorial(num);
// }

int fib(int n){
  if(n==1 || n==0){
    return 1;
  }
  return fib(n-1)+ fib(n-2);
}

int main(){
  int n;
  cin >> n;
  cout << fib(n);
}