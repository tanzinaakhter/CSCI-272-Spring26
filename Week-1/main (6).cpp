#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int DAYS = 7;
    double temps[DAYS];
    double sum = 0.0;

    cout << "Enter temperatures for 7 days:\n";

    
    for (int i = 0; i < DAYS; i++) {
        cout << "Day " << (i + 1) << ": ";
        cin >> temps[i];
        sum += temps[i];
    }

    double average = sum / DAYS;

    cout << "Temperatures entered:\n";
    for (int i = 0; i < DAYS; i++) {
        cout << "Day " << (i + 1) << ": " << temps[i] << endl;
    }

    cout << fixed << setprecision(2);
    cout << "Average temperature: " << average << endl;

    return 0;
}
