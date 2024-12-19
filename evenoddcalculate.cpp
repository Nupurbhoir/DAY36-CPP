#include <iostream>
using namespace std;

int main() {
    int n, sumEven = 0, productOdd = 1;
    bool hasOdd = false;

    cout << "Enter a positive integer n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            sumEven += i; // Sum of even numbers
        } else {
            productOdd *= i; // Product of odd numbers
            hasOdd = true;
        }
    }

    cout << "Sum of even numbers: " << sumEven << endl;
    if (hasOdd) {
        cout << "Product of odd numbers: " << productOdd << endl;
    } else {
        cout << "No odd numbers." << endl;
    }

    return 0;
}