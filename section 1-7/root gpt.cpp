#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, d, root1, root2;
    cout << "ROOTS OF QUADRATIC EQUATION\n";
    
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    // Check if it's a quadratic equation
    if (a == 0) {
        cout << "Not a quadratic equation (a cannot be zero).\n";
        return 0;
    }

    d = b * b - 4 * a * c; // Compute discriminant

    // Check the nature of the roots
    if (d > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and distinct: " << root1 << " and " << root2 << endl;
    } else if (d == 0) {
        // One real root (repeated)
        root1 = -b / (2 * a);
        cout << "Roots are real and equal: " << root1 << endl;
    } else {
        // Complex roots
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-d) / (2 * a);
        cout << "Roots are complex: " << realPart << " ± " << imagPart << "i" << endl;
    }

    return 0;
}

