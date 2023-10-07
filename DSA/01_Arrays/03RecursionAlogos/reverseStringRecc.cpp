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


//replace pi with 3.14


// #include <iostream>
// #include <cstring>
// using namespace std;

// void piRep(char* str,int i){
//   if(i==strlen(str)){
//     return;
//   }
  
//   piRep(str,i+1);
// }

// int main(){
//   char s[100]="pippiipzypi";
//   piRep(s,0);
//   cout<<s;
// }

