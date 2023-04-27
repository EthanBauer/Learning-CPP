// Simple data processing, like keeping a running average of numbers input fed into cin.

#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0;
    int count = 0;
    cout << "Enter a number: ";
    while (cin >> n) {
        sum += n;
        count++;
        cout << "Running average: " << sum / count << endl;
    }
    return 0;
}