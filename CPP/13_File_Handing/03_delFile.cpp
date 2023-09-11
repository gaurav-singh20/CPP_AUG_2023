#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

  int val = remove("newfile.txt"); //file deleted

  //verifing
  if(val==0){
    cout << "File deleted" << endl;
  }
  else{
    cout << "File not deleted or already has been deleted" << endl;
  }

}