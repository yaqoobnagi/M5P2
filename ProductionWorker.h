#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"
#include <exception>

class InvalidShift : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Shift must be 1 (Day) or 2 (Night).";
    }
};

class InvalidPayRate : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Pay rate cannot be negative.";
    }
};

class ProductionWorker : public Employee {
protected:
    int shift;         // 1 = day, 2 = night
    double hourlyPayRate;

public:
    ProductionWorker();
    ProductionWorker(string n, int num, string date, int s, double rate);

    void setShift(int s);              // VALIDATED
    void setHourlyPayRate(double rate); // VALIDATED

    int getShift() const;
    double getHourlyPayRate() const;

    void printProductionWorker() const;
};

#endif
