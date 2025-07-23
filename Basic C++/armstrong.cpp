#include <iostream>
using namespace std;

int main() {
    int n, r, sum = 0, m;
    cout << "Enter the number: ";
    cin >> n;

    m = n;  // Store the original number for comparison

    while (n > 0) {
        r = n % 10;  // ? Extract the last digit
        sum = sum + (r * r * r);  // ? Cube of each digit added to sum
        n = n / 10;  // ? Remove the last digit
    }

    if (sum == m) {
        cout << "Number is an Armstrong number.";
    } else {
        cout << "Not an Armstrong number.";
    }

    return 0;
}
 
