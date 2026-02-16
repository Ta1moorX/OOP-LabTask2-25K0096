#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    double salary;
    double tax;

public:
    void get_data() {
        cout << "Name: ";
        cin >> name;
        cout << "Monthly salary: ";
        cin >> salary;
        cout << "Tax percentage: ";
        cin >> tax;
    }

    double Salary_after_tax() {
        double s = salary - (salary * 0.02);
        return s;
    }

    void update_tax_percentage(double t) {
        tax = t;
    }
};

int main() {
    Employee e1, e2, e3;

    e1.get_data();
    cout << "After tax: " << e1.Salary_after_tax() << endl;
    e1.update_tax_percentage(3);
    cout << "After new tax: " << e1.Salary_after_tax() << endl;

    e2.get_data();
    cout << "After tax: " << e2.Salary_after_tax() << endl;

    e3.get_data();
    cout << "After tax: " << e3.Salary_after_tax() << endl;

    return 0;
}
