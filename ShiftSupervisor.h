#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"

class ShiftSupervisor : public Employee {
private:
    double annualSalary;
    double annualBonus;

public:
    ShiftSupervisor();
    ShiftSupervisor(string n, string num, string date, double salary, double bonus);

    void setAnnualSalary(double salary);
    void setAnnualBonus(double bonus);

    double getAnnualSalary() const;
    double getAnnualBonus() const;

    void printShiftSupervisor() const;
};

#endif
