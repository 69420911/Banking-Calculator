#include <iostream>
#include <math.h>
#include "investment.h"
using namespace std;

void Investment::SetTime(int t){
	timeMonthly = t;
}
int Investment::GetTime(){
	return timeMonthly;
}
void Investment::SetAmount(double p){
	initialAmount = p;
}
double Investment::GetAmount(){
	return initialAmount;
}
void Investment::SetNumComp(int n){
	numComp = n;
}
int Investment::GetNumComp() {
	return numComp;
}
void Investment::SetInterestRate(double r){
	intRate = r;
}
double Investment::GetInterestRate() {
	return intRate;
}
void Investment::CalcCompoundedInt(){
	double p = GetAmount();
	double r = GetInterestRate();
	int t = GetTime();
	CompoundIntrest = (p * (1.0 + (r * t)));
}
void Investment::CalcSimpleInt(){
	int p = GetAmount();
	double r = GetInterestRate();
	int n = GetNumComp();
	int t = GetTime();
	SimpleIntrest = (p * (pow((1.0 + (r / n)),(n * t))));
    
}

void Investment::DisplaySimpleInt(){
    
}
void Investment::DisplayCompoundedInt(){
    
}
