#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker {
private:
    double monthlyBonus;
    int requiredTrainingHours;
    int attendedTrainingHours;

public:
    TeamLeader();
    TeamLeader(string n, string num, string date, int s, double rate,
               double bonus, int required, int attended);

    void printTeamLeader() const;
};

#endif
