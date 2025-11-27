#include "ShiftSupervisor.h"

ShiftSupervisor::ShiftSupervisor() : Employee() {
    annualSalary = 0.0;
    annualBonus = 0.0;
}

ShiftSupervisor::ShiftSupervisor(string n, string num, string date, double salary, double bonus)
    : Employee(n, num, date) {
    annualSalary = salary;
    annualBonus = bonus;
}

void ShiftSupervisor::setAnnualSalary(double salary) { annualSalary = salary; }
void ShiftSupervisor::setAnnualBonus(double bonus) { annualBonus = bonus; }

double ShiftSupervisor::getAnnualSalary() const { return annualSalary; }
double ShiftSupervisor::getAnnualBonus() const { return annualBonus; }

void ShiftSupervisor::printShiftSupervisor() const {
    printEmployee();
    cout << "Annual Salary: $" << annualSalary << endl;
    cout << "Annual Bonus: $" << annualBonus << endl;
}
