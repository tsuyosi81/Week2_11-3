#ifndef BUDGET3_H 
#define BUDGET3_H
#include "auxil.h"	// For Aux class declaration 
#include <iostream>
using namespace std;

// Budget class declaration
class Budget
{
private:
    static double corpBudget;
    double divBudget;

public:

    Budget() { 
        int counter;
        cout << counter++ << " :Default Constructor Called!; \n"; 
        divBudget = 0; 
        }

    void addBudget(double b){ 
        divBudget += b; 
        corpBudget += divBudget; 
        }
    double getDivBudget() const { return divBudget; }
    static double getCorpBudget() { return corpBudget; }
    static void mainOffice(double);
    friend void Aux::addBudget(double);
};
#endif