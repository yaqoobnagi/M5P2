#include "ProductionWorker.h"

ProductionWorker::ProductionWorker() : Employee() {
    shift = 0;
    hourlyPayRate = 0.0;
}

ProductionWorker::ProductionWorker(string n, string num, string date, int s, double rate)
    : Employee(n, num, date) {
    shift = s;
    hourlyPayRate = rate;
}

void ProductionWorker::setShift(int s) { shift = s; }
void ProductionWorker::setHourlyPayRate(double rate) { hourlyPayRate = rate; }

int ProductionWorker::getShift() const { return shift; }
double ProductionWorker::getHourlyPayRate() const { return hourlyPayRate; }

void ProductionWorker::printProductionWorker() const {
    printEmployee();
    cout << "Shift: " << shift << endl;
    cout << "Hourly Pay Rate: $" << hourlyPayRate << endl;
}
