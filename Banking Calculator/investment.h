#include <iostream>

using namespace std;


class Investment{
	public:
		Investment();
		Investment(int timeM, double initAmount, double interestRate, int numberComp);
		double GetSimpleIntEQ() const;
		double GetCompoundedIntEQ() const;
		void SetTime(int );			//monthly
		void SetAmount(double );
		int GetTime() const;
		double GetAmount()const;
		void SetInterestRate(double );
		double GetInterestRate() const;
		void SetNumComp (int);
		int GetNumComp() const;
	private:
		int timeMonthly;
		double initialAmount;
		double intRate;
		int numComp;
};