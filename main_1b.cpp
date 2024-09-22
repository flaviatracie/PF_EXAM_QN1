#include <iostream>
using namespace std;

int sumSeries(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i += 2) {
        sum += i;  // Adding only odd numbers
    }
    return sum;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    int result = sumSeries(N);
    cout << "The sum of the series is: " << result << endl;

    return 0;
}
