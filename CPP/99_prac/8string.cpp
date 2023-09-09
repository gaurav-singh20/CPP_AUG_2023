/*getline()	This function is used to store a stream of characters as entered by the user in the object memory.
push_back()	This function is used to input a character at the end of the string.
pop_back()	Introduced from C++11(for strings), this function is used to delete the last character from the string. */

// #include <iostream>
// #include <string> // for string class
// using namespace std;
  
// // Driver Code
// int main()
// {
//     // Declaring string
//     string str;
  
//     // Taking string input using getline()
//     getline(cin, str);
  
//     // Displaying string
//     cout << "The initial string is : ";
//     cout << str << endl;
  
//     // Inserting a character
//     str.push_back('s');
  
//     // Displaying string
//     cout << "The string after push_back operation is : ";
//     cout << str << endl;
  
//     // Deleting a character
//     str.pop_back();
  
//     // Displaying string
//     cout << "The string after pop_back operation is : ";
//     cout << str << endl;
  
//     return 0;
// }

//------------------------------------------------------------------------------------------------------------

/*capacity()	This function returns the capacity allocated to the string, which can be equal to or more than the size of the string. Additional space is allocated so that when the new characters are added to the string, the operations can be done efficiently.
resize()	This function changes the size of the string, the size can be increased or decreased.
length()	This function finds the length of the string.
shrink_to_fit()	This function decreases the capacity of the string and makes it equal to the minimum capacity of the string. This operation is useful to save additional memory if we are sure that no further addition of characters has to be made.
*/

#include <iostream>
#include <string> // for string class
using namespace std;
  
// Driver Code
int main()
{
    // Initializing string
    string str = "geeksforgeeks is for geeks";
  
    // Displaying string
    cout << "The initial string is : ";
    cout << str << endl;
  
    // Resizing string using resize()
    str.resize(13);
  
    // Displaying string
    cout << "The string after resize operation is : ";
    cout << str << endl;
  
    // Displaying capacity of string
    cout << "The capacity of string is : ";
    cout << str.capacity() << endl;
  
    // Displaying length of the string
    cout << "The length of the string is :" << str.length()
         << endl;
  
    // Decreasing the capacity of string
    // using shrink_to_fit()
    str.shrink_to_fit();
  
    // Displaying string
    cout << "The new capacity after shrinking is : ";
    cout << str.capacity() << endl;
  
    return 0;
}