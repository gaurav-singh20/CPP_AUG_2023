#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ofstream onFile; //output file stream (a pre defiend class).

  onFile.open("file.txt");  //a new file file.txt will get created in the same folder.
  //onFile.open("C:\\Users\\SRC\\Desktop\\file.txt");  
  

  //to write
  onFile << "Hello ji";

  cout << "File updated" << endl;

  onFile.close();
}