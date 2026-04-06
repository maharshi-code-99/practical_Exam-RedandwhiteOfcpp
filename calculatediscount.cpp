#include <iostream>
using namespace std;

class Device {
public:
    virtual void calculateDiscount() {
        cout << "No discount" << endl;
    }
};

class Laptop : public Device {
public:
    void calculateDiscount() {
        cout << "Laptop Discount: 10%" << endl;
    }
};

class Smartphone : public Device {
public:
    void calculateDiscount() {
        cout << "Smartphone Discount: 5%" << endl;
    }
};

int main() {
    Device* d[2];

    Laptop l;
    Smartphone s;

    d[0] = &l;
    d[1] = &s;

    for(int i = 0; i < 2; i++) {
        d[i]->calculateDiscount();
    }

    return 0;
}