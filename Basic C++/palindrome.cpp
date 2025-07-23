#include <iostream>
using namespace std;

int main() {
    int n, r, rev = 0,m;
    cout << "Enter the number: ";
    cin >> n;
    m=n;

    while (n > 0) {
        r = n % 10;  // ? Extract the last digit
        n = n / 10;  // ? Remove the last digit
        rev= rev*10 + r;
    }
	if (rev=121=m){
		cout << "Is palindrome.";
	} else {
   	cout << "Not a palindrome.";
    }

    return 0;
}
 
