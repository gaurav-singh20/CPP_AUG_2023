#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ofstream onFile; //output file stream (a pre defiend class).

  onFile.open("file.txt");  //a new file file.txt will get created in the same folder.
  onFile << "Printed in file";

  cout << "File updated" << endl;

  onFile.close();
}