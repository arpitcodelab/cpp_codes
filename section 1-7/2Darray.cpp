#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of rows/columns (square grid): ";
    cin >> n;

    int A[n][n]; // 2D array declaration

    // Taking input for the 2D array
    cout << "Enter the elements of the grid:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j]; // Storing values in the array
        }
    }

    // Printing the 2D array
    cout << "Grid elements are:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

