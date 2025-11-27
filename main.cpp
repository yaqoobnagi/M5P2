#include <iostream>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
using namespace std;

int main() {
    ProductionWorker pw1("Alice", "101", "01/01/2020", 1, 20.50);
    ProductionWorker pw2("Bob", "102", "02/01/2021", 2, 22.75);

    ShiftSupervisor ss("Carol", "201", "03/01/2019", 60000, 5000);

    TeamLeader tl("Dave", "301", "04/01/2018", 1, 25.50, 1500, 40, 35);

    cout << "\n--- Production Workers ---\n";
    pw1.printProductionWorker();
    cout << endl;
    pw2.printProductionWorker();

    cout << "\n--- Shift Supervisor ---\n";
    ss.printShiftSupervisor();

    cout << "\n--- Team Leader ---\n";
    tl.printTeamLeader();

    return 0;
}
