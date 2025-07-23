#include <iostream>
using namespace std;

int main() {
    int n, r, rev = 0;
    cout << "Enter the number: ";
    cin >> n;

    while (n > 0) {
        r = n % 10;  // ? Extract the last digit
        n = n / 10;  // ? Remove the last digit
        rev= rev*10 + r;
    }

    cout << "reverse number is  "<< rev<<endl;

    return 0;
}
 
