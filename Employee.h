#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;

class InvalidEmployeeNumber : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Employee number must be between 0 and 9999.";
    }
};

class Employee {
protected:
    string name;
    int employeeNumber;   // CHANGE to int (makes validation possible)
    string hireDate;

public:
    Employee();
    Employee(string n, int num, string date);

    void setName(string n);
    void setEmployeeNumber(int num);  // VALIDATED
    void setHireDate(string date);

    string getName() const;
    int getEmployeeNumber() const;
    string getHireDate() const;

    void printEmployee() const;
};

#endif
