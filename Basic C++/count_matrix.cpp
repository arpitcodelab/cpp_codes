#include <iostream>
using namespace std;

int main() {
    int n, count = 1;

    cout << "Enter the grid size: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << count << "\t"; // Using tab for better spacing
            count++;
        }
        cout << endl;
    }

    return 0;
}

