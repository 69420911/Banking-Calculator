#include <iostream>
#include <math.h>
#include "investment.h"
using namespace std;

Investment::Investment(){
	int timeMonthly = 0;
	double initalAmount = 0.0;
	double intRate = 0.0;
	int numComp = 0;
	return;
}
void Investment::SetTime(int t){
	timeMonthly = t;
}
int Investment::GetTime()const{
	return timeMonthly;
}
void Investment::SetAmount(double p){
	initialAmount = p;
}
double Investment::GetAmount()const {
	return initialAmount;
}
void Investment::SetNumComp(int n){
	numComp = n;
}
int Investment::GetNumComp() const{
	return numComp;
}
void Investment::SetInterestRate(double r){
	intRate = r;
}
double Investment::GetInterestRate() const{
	return intRate;
}
double Investment::GetSimpleIntEQ() const{
	double p = GetAmount();
	double r = GetInterestRate();
	int t = GetTime();
	return (p * (1.0 + (r * t)));
}
double Investment::GetCompoundedIntEQ() const{
	int p = GetAmount();
	double r = GetInterestRate();
	int n = GetNumComp();
	int t = GetTime();
	
	return (p * (pow(1.0 + (r / n)),(n * t)));
}