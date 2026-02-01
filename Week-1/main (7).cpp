#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char choice;

cout << "Enter the first number: ";
cin >> num1;
cout << "Enter the second number: ";
cin >> num2;

cout << "Choose one of the following options:";
cout << "a for Addition";
cout << "s for Subtraction";
cout << "m for Multiplication";
cout << "d for Division";
cout << "Enter a choice:";
    cin >> choice;

cout << endl;
switch (choice) {
        case 'a':
            cout << "The addition of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
            
        case 's':
            cout << "The subtraction of " << num1 << " and " << num2 << " is " << num1 - num2 << endl;
            
        case 'm':
            cout << "The multiplication of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
          
        case 'd':
                cout << "The division of " << num1 << " and " << num2 << " is " << num1 / num2 << endl;         
    }
    return 0;
}
