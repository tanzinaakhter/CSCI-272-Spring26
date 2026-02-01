#include <iostream>
using namespace std;

int main() {
    double income, tax;

    cout << "***Welcome to Mario's Federal Tax Calculator***" << endl;
    cout << "Enter your pay salary in a year ";
    cin >> income;

     if (income <= 11000) {
        tax = income * 0.10;
    }
    else if (income <= 44725) {
        tax = 1100 + 0.12;
    }
    else if (income <= 95375) {
        tax = 5147 + 0.22;
    }
    else if (income <= 182100) {
        tax = 16290 + 0.24;
    }
    else if (income <= 231250) {
        tax = 37104 + 0.32;
    }
    cout << "Tax amount you owe to IRS is " << endl;
    cout << "Thanks for using the calculator, have a great year ahead!" << endl;

    return 0;
}
