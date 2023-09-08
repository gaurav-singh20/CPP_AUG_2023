#include <iostream>
using namespace std;

class Stack{

        int* arr;
        int top;

        public:
        int size;
        void Stack1(/*int size*/){
            //this->size=size;
            arr = new int[size];
            top = -1;

        }
        // void Stack1(/*int size*/){
        //     //this->size=size;
        //     arr = new int[size];
        //     top = -1;

        // }  // s1.Stack1(); likhna padega niche main mai

        void push(int val)
        {
            if (top == size - 1)
            {
                cout << "stack overflow" << endl;
                return;
            }
            top++;
            arr[top]=val;
        }

        void pop()
        {
            if (top == -1)
            {
                cout << "no element to pop" << endl;
                return;
            }
            top--;
        }

        int Top(){
            if (top == -1)
            {
                cout << "no element in stack" << endl;
                return -1;
            }

            return arr[top];
        }
    };

int main(){
    Stack s1;
    // s1.Stack1();
    s1.size=4;
    s1.push(4);       
    s1.push(6);
    s1.push(8);
    //s1.pop();
    cout << s1.Top();
}