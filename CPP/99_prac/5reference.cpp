#include<iostream> 

using namespace std;

int main(){
    
    // *************Reference Variables**************** 
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    float x = 455;
    float & y = x; //y is just another name for x
    cout<<x<<endl;
    cout<<y<<endl; 
}