#include <iostream>
using namespace std;
int main() {
    int A[10], n, mid, key, i, l, h;
	cout << "Enter the number of elements (Max 10, sorted order): ";
    cin >> n;

    if (n > 10) {
        cout << "Enter only up to 10 numbers!" << endl;
        return 0; 
    }
	cout << "Enter " << n << " sorted numbers: ";
    for (i = 0; i < n; i++) {
        cin >> A[i]; 
    }
	cout << "Enter the key value to search: ";
    cin >> key;
	l = 0;
    h = n - 1;
	while (l <= h) {
        mid = (l + h) / 2;
        if (A[mid] == key) {
            cout << "Found at index " << mid << endl;
            return 0;
        } else if (key < A[mid]) {
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }
	cout << "Not found" << endl;
    return 0;
}

