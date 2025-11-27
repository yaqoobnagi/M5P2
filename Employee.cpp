#include "Employee.h"

Employee::Employee() {
    name = "";
    employeeNumber = "";
    hireDate = "";
}

Employee::Employee(string n, string num, string date) {
    name = n;
    employeeNumber = num;
    hireDate = date;
}

void Employee::setName(string n) { name = n; }
void Employee::setEmployeeNumber(string num) { employeeNumber = num; }
void Employee::setHireDate(string date) { hireDate = date; }

string Employee::getName() const { return name; }
string Employee::getEmployeeNumber() const { return employeeNumber; }
string Employee::getHireDate() const { return hireDate; }

void Employee::printEmployee() const {
    cout << "Name: " << name << endl;
    cout << "Employee Number: " << employeeNumber << endl;
    cout << "Hire Date: " << hireDate << endl;
}
