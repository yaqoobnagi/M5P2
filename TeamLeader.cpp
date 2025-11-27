#include "TeamLeader.h"

TeamLeader::TeamLeader() : ProductionWorker() {
    monthlyBonus = 0.0;
    requiredTrainingHours = 0;
    attendedTrainingHours = 0;
}

TeamLeader::TeamLeader(string n, string num, string date, int s, double rate,
                       double bonus, int required, int attended)
    : ProductionWorker(n, num, date, s, rate) {
    monthlyBonus = bonus;
    requiredTrainingHours = required;
    attendedTrainingHours = attended;
}

void TeamLeader::printTeamLeader() const {
    printProductionWorker();
    cout << "Monthly Bonus: $" << monthlyBonus << endl;
    cout << "Required Training Hours: " << requiredTrainingHours << endl;
    cout << "Attended Training Hours: " << attendedTrainingHours << endl;
}
