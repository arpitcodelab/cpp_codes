#include <iostream>
using namespace std;

void hollow(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            // Border condition
            if (j == 0 || j == i || i == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    hollow(n);
    return 0;
}
