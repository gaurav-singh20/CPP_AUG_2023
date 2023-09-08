#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    // int a,b;
    // cin >> a;
    // cin >> b;
    // for(int i=1;i<=a;i++)
    // s.push(i);
    // for(int i=1;i<=b;i++)
    // s.pop();
    // cout << "a-b is : " << s.size() << endl;
    
    //push
    s.push(1);
    s.push(2);
    s.push(3);

    //pop
    s.pop();
    s.pop();
    s.pop();

    //cout << s.top() << endl;

    if(s.empty())
    cout << "stack is empty" << endl;

    else
    cout << "not empty" << endl;

    cout << "size : " << s.size() << endl;
    
}

