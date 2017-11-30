#include <iostream>
#include <ostream>
#include "investment.h"
using namespace std;

void printmenu();

int main() {
    cout << "Welcome to our Interest Calculator!" << endl;
    printmenu();
}

void printmenu() {
    Investment invest;
    double input;
    char menu = ' ';
    while (menu != 'q') {
        menu = ' ';
        cout << "a - Simple Interest Invesment Account" << endl;
        cout << "b - Compounded Interest Invesment Account" << endl;
        cout << "c - Show Both" << endl;
        cout << "q - Quit" << endl;
        
        while (menu != 'a' && menu != 'b' && menu != 'c' && menu != 'q') {
            menu = ' ';
            cout << "Please choose an option:" << endl;
            cin >> menu;
        }
        
        switch (menu) {
            case 'a':
                cout << "Please Enter the Initial Ammount you wish to deposit into a bank account?" << endl;
                cin >> input;
                invest.SetAmount(input);
                cout << "What is the interest rate?" << endl;
                cin >> input;
                invest.SetInterestRate(input);
                cout << "How many months would you like to invest for?" << endl;
                cin >> input;
                invest.SetTime(input);
                invest.DisplaySimpleInt();
                break;
            case 'b':
                cout << "Please Enter the Initial Ammount you wish to deposit into a bank account?" << endl;
                cin >> input;
                invest.SetAmount(input);
                cout << "What interest rate?" << endl;
                cin >> input;
                invest.SetInterestRate(input);
                cout << "How many times within a year would you like to have your interest compounded?" << endl;
                cin >> input;
                invest.SetTimesToCompound(input);
                cout << "How many years would you like to invest?" << endl;
                cin >> input;
                invest.SetTime(input);
                invest.DisplayCompoundedInt();
                
                break;
            case 'c':
                double temp = invest.GetSimpleIntrest();
                double temp2 = invest.GetCompoundedInterest();
                cout << endl;
                cout << "Simple Interest: "  << temp <<  "$ Compounded Interest: " << temp2 << "$" << endl;
                cout << endl;
                break;
        }
    }
}
