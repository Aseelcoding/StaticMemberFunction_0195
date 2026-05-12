#include <iostream>
#include <string>

using namespace std;

class Vehicle {
private:
    int id;
    string name;

public:

    // default constructor
    Vehicle() {
        id = 0;
        name = "Unknown";
    }

    // constructor with id only
    Vehicle(int i) {
        id = i;
        name = "Unknown";
    }

    // constructor with name only
    Vehicle(string n) {
        id = 0;
        name = n;
    }

    // constructor with complete data
    Vehicle(int i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << "Vehicle ID   : " << id << endl;
        cout << "Vehicle Name : " << name << endl;
        cout << endl;
    }
};

int main() {

    Vehicle v1;
    Vehicle v2(12);
    Vehicle v3("Toyota");
    Vehicle v4(20, "Honda");

    cout << "Vehicle Data 1" << endl;
    v1.display();

    cout << "Vehicle Data 2" << endl;
    v2.display();

    cout << "Vehicle Data 3" << endl;
    v3.display();

    cout << "Vehicle Data 4" << endl;
    v4.display();

    return 0;
}