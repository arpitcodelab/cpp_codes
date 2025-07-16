#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the grid size: ";
    cin >> n;

    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) {  
            if (i + j >= n - 1)  
                cout << " * ";  // Print stars for upper triangle  
            else  
                cout << "   ";  // Print spaces for alignment  
        }
        cout << endl;  
    }

    return 0;
}

