#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    string name;
    int rollNo;
    float marks;
};

int main() {
    fstream file("students.txt", ios::in | ios::out | ios::app);

    if (file) {
        Student s1{"John", 101, 85.5};
        Student s2{"Jane", 102, 92.0};

        file << s1.name << " " << s1.rollNo << " " << s1.marks << endl;
        file << s2.name << " " << s2.rollNo << " " << s2.marks << endl;

        file.seekg(0);
        Student readS1;
        Student readS2;

        file >> readS1.name >> readS1.rollNo >> readS1.marks;
        file >> readS2.name >> readS2.rollNo >> readS2.marks;

        cout << readS1.name << " scored " << readS1.marks << endl;
        cout << readS2.name << " scored " << readS2.marks << endl;

        file.close();
    } else {
        cout << "File not found.";
    }

    return 0;
}