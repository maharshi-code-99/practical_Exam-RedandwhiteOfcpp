#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    // Parameterized constructor
    Student(string n, int r) {
        name = n;
        rollNumber = r;
    }

    void display() {
        cout << "Name: " << name << ", Roll No: " << rollNumber << endl;
    }
};

int main() {
    Student s[3] = {
        Student("Rahul", 1),
        Student("Amit", 2),
        Student("Neha", 3)
    };

    for(int i = 0; i < 3; i++) {
        s[i].display();
    }

    return 0;
}