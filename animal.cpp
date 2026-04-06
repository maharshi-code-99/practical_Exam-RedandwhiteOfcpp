#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;
    virtual void move() = 0;
};

class Lion : public Animal {
public:
    void makeSound() {
        cout << "Lion roars" << endl;
    }

    void move() {
        cout << "Lion runs" << endl;
    }
};

class Fish : public Animal {
public:
    void makeSound() {
        cout << "Fish cannot make loud sound" << endl;
    }

    void move() {
        cout << "Fish swims" << endl;
    }
};

int main() {
    Animal* a[2];

    Lion l;
    Fish f;

    a[0] = &l;
    a[1] = &f;

    for(int i = 0; i < 2; i++) {
        a[i]->makeSound();
        a[i]->move();
        cout << endl;
    }

    return 0;
}