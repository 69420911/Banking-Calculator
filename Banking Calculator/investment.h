#include <iostream>

using namespace std;

class Investment {
public:
    void SetTime(int);
    void SetAmount(double);
    void SetInterestRate(double);
    void SetNumComp (int);
    void SetSimpleInteret();
    void SetCompoundedInterest();
    void CalcSimpleInt();
    void CalcCompoundedInt();
    void DisplaySimpleInt();
    void DisplayCompoundedInt();
    
    double GetAmount();
    double GetInterestRate();
    double GetSimpleIntrest();
    double GetCompoundedInterest();
    
    int GetNumComp();
    int GetTime();
private:
    double initialAmount;
    double intRate;
    double SimpleInterest;
    double CompoundInterest;
    int numComp;
    int timeMonthly;
    
};
