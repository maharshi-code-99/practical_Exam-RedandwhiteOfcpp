#include <iostream>
using namespace std;

class Device {
private:
    string brand;
    int powerConsumption;

public:
    void setDevice(string b, int p) {
        brand = b;
        powerConsumption = p;
    }

    string getBrand() { return brand; }
    int getPower() { return powerConsumption; }
};

class Laptop : public Device {
public:
    void display() {
        cout << "Laptop Brand: " << getBrand() << endl;
        cout << "Power: " << getPower() << "W" << endl;
    }
};

class Smartphone : public Device {
public:
    void display() {
        cout << "Smartphone Brand: " << getBrand() << endl;
        cout << "Power: " << getPower() << "W" << endl;
    }
};

int main() {
    Laptop l;
    Smartphone s;

    l.setDevice("Dell", 65);
    s.setDevice("Samsung", 15);

    l.display();
    cout << endl;
    s.display();

    return 0;
}