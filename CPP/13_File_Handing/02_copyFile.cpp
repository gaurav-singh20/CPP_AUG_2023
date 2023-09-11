#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

  ifstream inFile;
  ofstream onFile;

  char ch;

  inFile.open("file.txt"); //already created
  onFile.open("newfile.txt"); //creating 

  while(inFile.get(ch)){  //read ch from inFile
    onFile.put(ch);  //write ch into onFile
  }

  inFile.close();
  onFile.close();
}
