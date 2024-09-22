#include <iostream>
using namespace std;

bool is_leap_year(unsigned int Y) {
    // Check if it's a century year
    if (Y % 100 == 0) {
        // Century year: leap year only if divisible by 400
        return Y % 400 == 0;
    } else {
        // Non-century year: leap year if divisible by 4
        return Y % 4 == 0;
    }
}

int main() {
    unsigned int year;
    cout << "Enter a year: ";
    cin >> year;

    if (is_leap_year(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
