#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    d = b * b - 4 * a * c;  // Calculate discriminant

    if (d == 0) {  // ? Fixed the comparison operator
        cout << "Roots are real and equal";
    }
    else if (d > 0) {
        cout << "Roots are real and unequal";
    }
    else {
        cout << "Roots are imaginary";
    }

    return 0;
}

