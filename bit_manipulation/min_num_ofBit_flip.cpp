#include <iostream>
using namespace std;

int countFlips(int a, int b) {
    int xorResult = a ^ b; // XOR to find differing bits
    int count = 0;

    // Count number of set bits (1s) in xorResult
    while (xorResult) {
        count += xorResult & 1; // if LSB is 1, add 1 to count
        xorResult >>= 1;        // right shift to check next bit
    }

    return count;
}

int main() {
    int n, m;

    cout << "Enter the start number: ";
    cin >> n;

    cout << "Enter the goal number: ";
    cin >> m;

    int flips = countFlips(n, m);

    cout << "The number of bits to flip to convert " << n << " to " << m << " is: " << flips << endl;

    return 0;
}
