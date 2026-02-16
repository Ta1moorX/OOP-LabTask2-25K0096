#include <iostream>
using namespace std;

class BoardMarker {
private:
    string company;
    string color;
    bool refillable;
    bool inkEmpty;

public:

    void setCompany(string c) { company = c; }
    void setColor(string c) { color = c; }
    void setRefillable(bool r) { refillable = r; }
    void setInkEmpty(bool i) { inkEmpty = i; }


    string getCompany() { return company; }
    string getColor() { return color; }
    bool getRefillable() { return refillable; }
    bool getInkEmpty() { return inkEmpty; }

    void write() {
        if (inkEmpty == true)
            cout << "Cannot write. Ink is empty.\n";
        else
            cout << "Writing...\n";
    }

    void refill() {
        if (refillable == true) {
            inkEmpty = false;
            cout << "Marker refilled.\n";
        } else {
            cout << "Marker cannot be refilled.\n";
        }
    }
};

int main() {
    BoardMarker m1, m2, m3;

    m1.setCompany("Dollar");
    m1.setColor("Black");
    m1.setRefillable(true);
    m1.setInkEmpty(true);

    m2.setCompany("Piano");
    m2.setColor("Red");
    m2.setRefillable(false);
    m2.setInkEmpty(false);

    m3.setCompany("Dux");
    m3.setColor("Blue");
    m3.setRefillable(true);
    m3.setInkEmpty(false);

    m1.write();
    m1.refill();
    m1.write();

    m2.write();
    m2.refill();

    m3.write();

    return 0;
}
