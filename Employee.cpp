#include "Employee.h"

Employee::Employee() {
    name = "";
    employeeNumber = 0;
    hireDate = "";
}

Employee::Employee(string n, int num, string date) {
    setName(n);
    setEmployeeNumber(num);  // VALIDATED
    setHireDate(date);
}

void Employee::setName(string n) { name = n; }

void Employee::setEmployeeNumber(int num) {
    if (num < 0 || num > 9999) {
        throw InvalidEmployeeNumber();
    }
    employeeNumber = num;
}

void Employee::setHireDate(string date) { hireDate = date; }

string Employee::getName() const { return name; }
int Employee::getEmployeeNumber() const { return employeeNumber; }
string Employee::getHireDate() const { return hireDate; }

void Employee::printEmployee() const {
    cout << "Name: " << name << endl;
    cout << "Employee Number: " << employeeNumber << endl;
    cout << "Hire Date: " << hireDate << endl;
}
