#include <iostream>
#include <ostream>
using namespace std;

void printmenu(){
    char menu = ' ';
    while (menu != 'q') {
        menu = ' ';
        cout << "a - Simple Interest Invesment Account" << endl;
        cout << "b - Compounded Interest Invesment Account" << endl;
        cout << "c - Show differance between the two" << endl;
        cout << "q - Quit" << endl;
        
        while (menu != 'a' && menu != 'b' && menu != 'c' && menu != 'q') {
            cout << "Please choose an option:" << endl;
            cin >> menu;
        }
        
        switch (menu) {
            case 'a':
                cout << "a" << endl;
                break;
            case 'b':
                cout << "b" << endl;
                break;
            case 'c':
                cout << "c" << endl;
                break;
        }
    }
}
int main() {
    cout << "Welcome to our Interest Calculator!" << endl;
    printmenu();
}
