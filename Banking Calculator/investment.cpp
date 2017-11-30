#include <iostream>
#include <math.h>
#include "investment.h"
using namespace std;

void Investment::SetTime(int t){
	timeMonthly = t;
}

void Investment::SetAmount(double p){
	initialAmount = p;
}

void Investment::SetInterestRate(double r){
	intRate = r;
}

void Investment::SetTimesToCompound(int a){
    timestocompound = a;
}

void Investment::CalcSimpleInt(){
	double p = GetAmount();
	double r = GetInterestRate();
	int t = GetTime();
	SimpleInterest = (p * (1.0 + (r * t)));
}

void Investment::CalcCompoundedInt(){
	int p = GetAmount();
	double r = GetInterestRate();
    int n = GetSetTimesToCompound();
    int t = GetTime();
    CompoundInterest = p*pow((1+r/100),(t*n));
    cout << CompoundInterest << " DEBUG" << endl;
}

void Investment::DisplaySimpleInt(){
    CalcSimpleInt();
    cout << "After: " << GetTime() << " Month(s) your new Balance is: " << GetSimpleIntrest() << endl;
    
}
void Investment::DisplayCompoundedInt(){
    CalcCompoundedInt();
    cout << "After: " << GetTime() << " Years(s) your new Balance is: " << GetCompoundedInterest() << endl;
}

double Investment::GetSimpleIntrest(){
    return SimpleInterest;
}

double Investment::GetCompoundedInterest(){
    return CompoundInterest;
}

int Investment::GetSetTimesToCompound(){
    return timestocompound;
}
double Investment::GetInterestRate() {
    return intRate;
}

double Investment::GetAmount(){
    return initialAmount;
}

int Investment::GetTime(){
    return timeMonthly;
}
