#include <iostream>

using namespace std;

class Investment {
public:
    void SetTime(int);
    void SetAmount(double);
    void SetInterestRate(double);
    void SetSimpleInteret();
    void SetTimesToCompound(int);
    void SetCompoundedInterest();
    void CalcSimpleInt();
    void CalcCompoundedInt();
    void DisplaySimpleInt();
    void DisplayCompoundedInt();
    
    double GetAmount();
    double GetInterestRate();
    double GetSimpleIntrest();
    double GetCompoundedInterest();
    
    int GetSetTimesToCompound();
    int GetTime();
private:
    double initialAmount;
    double intRate;
    double SimpleInterest;
    long double CompoundInterest;
    int timestocompound;
    int timeMonthly;
    
};
