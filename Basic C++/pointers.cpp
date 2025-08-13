#include <bits/stdc++.h>
using namespace std;

int P1() {
    int a = 10;
    int *p = &a; // pointer to a
    cout << a << endl;  // prints value of a
    cout << p << endl;  // prints address of a
    return 0;
}

int P2() {
    int A[5] = {1, 2, 3, 4, 5};
    int *p = A; // points to first element
    for (int i = 0; i < 5; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
    return 0;
}

int P3() {
    int *p = new int[5]{1, 2, 3, 4, 5}; // heap allocation
    for (int i = 0; i < 5; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
    delete[] p; // deallocate heap
    return 0;
}

int main() {
    P1();
    P2();
    P3();
    return 0;
}
