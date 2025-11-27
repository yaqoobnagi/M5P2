#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    string employeeNumber;
    string hireDate;

public:
    Employee();
    Employee(string n, string num, string date);

    void setName(string n);
    void setEmployeeNumber(string num);
    void setHireDate(string date);

    string getName() const;
    string getEmployeeNumber() const;
    string getHireDate() const;

    void printEmployee() const;
};

#endif
