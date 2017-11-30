#include <iostream>

using namespace std;


class Investment{
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
		int GetTime();
		double GetAmount();
		double GetInterestRate();
		int GetNumComp();
	private:
		int timeMonthly;
		double initialAmount;
		double intRate;
        double SimpleIntrest;
        double CompoundIntrest;
		int numComp;
};
