#include <iostream>
using namespace std;

void revStr(string &str,int s,int e){
  if(s>=e){
    return;
  }
  swap(str[s],str[e]);
  revStr(str,s+1,e-1);
}

int main(){
  string s="Hello";

  revStr(s,0,4);
  cout<<s;
}