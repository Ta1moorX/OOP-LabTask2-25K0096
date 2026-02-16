#include "Employee.h"

int main() {
    Employee e1, e2, e3;

    e1.get_data();
    cout << e1.Salary_after_tax() << endl;

    e2.get_data();
    cout << e2.Salary_after_tax() << endl;

    e3.get_data();
    cout << e3.Salary_after_tax() << endl;

    return 0;
}
