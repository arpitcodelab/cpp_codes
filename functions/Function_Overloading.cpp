#include <iostream>
using namespace std;

// Function 1: Add two integers
int add(int x, int y) {
    return x + y;
}

// Function 2: Add three integers (overloaded)
int add(int x, int y, int z) {
    return x + y + z;
}

// Function 3: Add two floats (overloaded)
float add(float a, float b) {
    return a + b;
}

int main() {
    int a = 10, b = 2, c = 5;
    int result1 = add(a, b);       // Calls add(int, int)
    int result2 = add(a, b, c);    // Calls add(int, int, int)

    float x = 1.4f, y = 4.5f;
    float result3 = add(x, y);     // Calls add(float, float)

    cout << "Addition of 2 ints: " << result1 << endl;
    cout << "Addition of 3 ints: " << result2 << endl;
    cout << "Addition of 2 floats: " << result3 << endl;

    return 0;
}
