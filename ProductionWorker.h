#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

class ProductionWorker : public Employee {
protected:
    int shift;
    double hourlyPayRate;

public:
    ProductionWorker();
    ProductionWorker(string n, string num, string date, int s, double rate);

    void setShift(int s);
    void setHourlyPayRate(double rate);

    int getShift() const;
    double getHourlyPayRate() const;

    void printProductionWorker() const;
};

#endif
