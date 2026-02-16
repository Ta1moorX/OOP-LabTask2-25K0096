#include <iostream>
using namespace std;

class WaterBottle {
private:
    string company;
    string color;
    double liter;
    double ml;

public:
    void setCompany(string c) { company = c; }
    void setColor(string c) { color = c; }
    void setCapacity(double l) {
        liter = l;
        ml = l * 1000;
    }

    string getCompany() { return company; }
    string getColor() { return color; }
    double getLiter() { return liter; }
    double getML() { return ml; }

    void drinkWater() {
        double d;
        cout << "Enter water drank in ml: ";
        cin >> d;
        ml = ml - d;
        if (ml < 0) ml = 0;
        liter = ml / 1000;
        cout << "Remaining: " << liter << " L (" << ml << " ml)\n";
    }
};

int main() {
    WaterBottle b;
    b.setCompany("Tupperware");
    b.setColor("Blue");
    b.setCapacity(2);

    cout << "Company: " << b.getCompany() << endl;
    cout << "Color: " << b.getColor() << endl;
    cout << "Capacity: " << b.getLiter() << " L\n";

    b.drinkWater();

    return 0;
}
