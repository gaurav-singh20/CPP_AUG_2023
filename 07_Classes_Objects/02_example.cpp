// #include <iostream>
// using namespace std;

// class Room{
//     public:

//     int length;
//     int breadth;
//     int height;

//     int calculateArea(){
//         return length * breadth;
//     }

//     int calculateVolume(){
//         return length * breadth * height;
//     }
// };

// int main(){
//     Room room1;

//     room1.length = 10;
//     room1.breadth = 10;
//     room1.height = 5;

//     cout << room1.calculateArea() << endl;
//     cout << room1.calculateVolume();
// }

#include <iostream>
using namespace std;

class Room{
    public:
    int rWidth;
    int rLength;
    //private:
    int rHeight;
    int calArea(){
        return rWidth * rLength;  
    }
  
    int calVol(){
        return rWidth * rLength * rHeight;  
    }
  
};

int main(){
  Room r1,r2;
  r1.rHeight=10;
  r1.rWidth=20;
  r1.rLength=30;
  r2.rLength=30;
  r2.rWidth=2;
  
  cout << r1.calArea() << endl;
  cout << r1.calVol() << endl;
  cout << r2.calArea() << endl;
}
