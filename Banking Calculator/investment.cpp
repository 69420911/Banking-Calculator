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

void Investment::SetNumComp(int n){
	numComp = n;
}

void Investment::SetInterestRate(double r){
	intRate = r;
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
	int n = GetNumComp();
	int t = GetTime();
	CompoundInterest = (p * (pow((1.0 + (r / n)),(n * t))));
}

void Investment::DisplaySimpleInt(){
    CalcSimpleInt();
    cout << "After: " << GetTime() << " Month(s) your new Balance is: " << GetSimpleIntrest() << endl;
    
}
void Investment::DisplayCompoundedInt(){
    CalcCompoundedInt();
    cout << "After: " << GetTime() << " Month(s) your new Balance is: " << GetCompoundedInterest() << endl;
}

double Investment::GetSimpleIntrest(){
    return SimpleInterest;
}

double Investment::GetCompoundedInterest(){
    return CompoundInterest;
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

int Investment::GetNumComp() {
    return numComp;
}
