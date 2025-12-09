#include "ProductionWorker.h"

ProductionWorker::ProductionWorker()
    : Employee() {
    shift = 1;
    hourlyPayRate = 0.0;
}

ProductionWorker::ProductionWorker(string n, int num, string date, int s, double rate)
    : Employee(n, num, date) {
    setShift(s);
    setHourlyPayRate(rate);
}

void ProductionWorker::setShift(int s) {
    if (s != 1 && s != 2) {
        throw InvalidShift();
    }
    shift = s;
}

void ProductionWorker::setHourlyPayRate(double rate) {
    if (rate < 0) {
        throw InvalidPayRate();
    }
    hourlyPayRate = rate;
}

int ProductionWorker::getShift() const { return shift; }
double ProductionWorker::getHourlyPayRate() const { return hourlyPayRate; }

void ProductionWorker::printProductionWorker() const {
    printEmployee();
    cout << "Shift: " << shift << endl;
    cout << "Hourly Pay Rate: $" << hourlyPayRate << endl;
}
