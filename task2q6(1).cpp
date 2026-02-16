#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    double salary;
    double tax;

public:
    void get_data();
    double Salary_after_tax();
    void update_tax_percentage(double t);
};
