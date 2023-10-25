#include <iostream>
using namespace std;


/*
Exceptions are run time anormalies or usual conditoins that a program may encounter during execution.

Two types:

1. synchronous -> The exceptions which occur during the program execution due to some fault in the input data.
->out of range,division by zero.

2. Asynchronous -> The execptions caused by events or faults unrealted to program or beyond the control of program. (not in our control)
-> keyboard failure, disk failure.

We only deal with syncronous

1. Detect the problem (Hit the execption)
2. Inform that an error has been detected (Throw the exception)
3. Receive error information (Catch the execption)
4. Take corrective actions (Handle the exception)

Exception handling mechanism basically vuilds upon three keyword
  -> try
  -> catch
  -> throw
.

1. TRY

This keyword is used to preface a block of statements which may genrate exception.

  try{
    statement1;
    statement2;
  }
.

2. THROW

When the exception is detected, it is thrown using "throw" statement block int the try block.
  
  try{
    statement1;
    statement2;

    throw(exception);
  }
.

3. CATCH

This block catches the exception and handles it appropriately. The catch block that catches the exception must immediately flow the try block that throws the exception.
  
  try{
    statement1;
    statement2;

    throw(exception);
  }
  catch(argument){
    handle/action to be taken.
  }

*/

int main(){
  int a,b;
  cout << "Enter value of a and b : ";
  cin >> a >> b;

  try{
    if(b!=0) cout << a/b;

    else throw b;
  }

  catch(int e){
    cout << "Devision by zero : " << e << endl;
  } 
}