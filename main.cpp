#include <iostream>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n--- Employee Menu ---\n";
        cout << "1. Create Production Worker\n";
        cout << "2. Create Shift Supervisor\n";
        cout << "3. Create Team Leader\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string name, date;
            int num, shift;
            double rate;

            bool valid = false;
            ProductionWorker* pw = nullptr;

            while (!valid) {
                try {
                    cout << "Name: ";
                    cin >> name;
                    cout << "Employee Number: ";
                    cin >> num;
                    cout << "Hire Date: ";
                    cin >> date;
                    cout << "Shift (1 or 2): ";
                    cin >> shift;
                    cout << "Hourly Pay Rate: ";
                    cin >> rate;

                    pw = new ProductionWorker(name, num, date, shift, rate);
                    valid = true;
                }
                catch (exception& e) {
                    cout << "\n" << e.what() << endl;
                    cout << "Please re-enter information.\n\n";
                }
            }

            cout << "\n✔ Employee Created Successfully:\n";
            pw->printProductionWorker();
            delete pw;
        }

        else if (choice == 2) {
            ShiftSupervisor ss("Carol", 201, "03/01/2019", 60000, 5000);
            ss.printShiftSupervisor();
        }

        else if (choice == 3) {
            TeamLeader tl("Dave", 301, "04/01/2018", 1, 25.50, 1500, 40, 35);
            tl.printTeamLeader();
        }

    } while (choice != 4);

    return 0;
}
