#include <iostream>
using namespace std;
int main() {
        //Array stores multiple vslues of same type of elements that have contigeous memory location in a single variable
        
        //declaration
        //int arrayName[size of the aaray];              
        
        //If array is not initialised then it will through garbage value (not null array)
        
        //initialization
        
        //int arrayName[size of the array] = { 1,2,3,4,5.....};       
        
        // indexing in arrays starts from 0
        // array create contegious blocks inside the memory
        
        //acessing an element of an array (by the help of indexing)
        //int arr[5]={1,2,3,4,5};     //if we r giving the members then not essential to give the size of array (arr[] is also correct)
        // cout<<arr[0]<<endl;
        // arr[0]=6 ;
        // cout<<arr[0] <<endl;           //we can change the value of any index like this
        
       //printing all members of the array

      int arr[5];
      
      cout << "enter elements of array: " <<endl;
      for(int i=0;i<5;i++){        
          cin >> arr[i];
      }

      cout << "entered elements are: " << endl;
      for(int i=0;i<5;i++){        
          cout << arr[i] << " ";
      }
      cout << endl;

      //"for each" function :
      cout << "showing entered elements are: " << endl;
      for (int i : arr){          //Here int is not for index its for datatype of array. We can also write "auto" instead of int/stringfloat (no bother to decide datatype). 
           cout << i <<endl;      // i here is arr[i]
      }
      cout << endl;

      //"sizeof()" function :
      //int a=5;
      //cout << sizeof(a) << endl;
      //cout << sizeof(int) << endl;
      //cout << sizeof(5) << endl;
      cout<< "size of array is : " << sizeof(arr);     
}