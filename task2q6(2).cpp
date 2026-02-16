#include "Employee.h"

void Employee::get_data() {
    cout << "Name: ";
    cin >> name;
    cout << "Monthly salary: ";
    cin >> salary;
    cout << "Tax percentage: ";
    cin >> tax;
}

double Employee::Salary_after_tax() {
    double s = salary - (salary * 0.02);
    return s;
}

void Employee::update_tax_percentage(double t) {
    tax = t;
}
