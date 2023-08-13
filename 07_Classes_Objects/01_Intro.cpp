#include <iostream>
using namespace std;

//Access modifiers
//public
//private
//protected

class Building{
    public:
    int door;

    private:
    string doorColor;

    public:
    int window;
    string windowColor;
    int elevator;

    void elevatorFunctioning(){
        //Working of elevator
    }
};

int main(){

    Building b1;

    b1.door;
    b1.window;
    //b1.doorColor;

}