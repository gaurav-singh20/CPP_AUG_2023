#include <iostream>
using namespace std;

class Point {
public:
    int x, y;
    Point(int x_val, int y_val) : x(x_val), y(y_val) {}
    Point operator-(Point& other) {
        return Point(x - other.x, y - other.y);
    }
};

int main() {
    Point p1(5, 10);
    Point p2(2, 6);
    Point result = p1 - p2;
    cout << result.x << ", " << result.y;
    return 0;
}