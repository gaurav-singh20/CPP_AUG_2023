#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  ifstream inFile; //input file stream (a pre defiend class).
  string str;
  inFile.open("file.txt");

  //to read
  // inFile >> str;
  // cout << str;
  //this didn't work out... "space" will terminate the cout (whole string won't print)

  //cout << "File updated" << endl;

  while(getline(inFile,str)){
    cout << str;
  }

  inFile.close();
}