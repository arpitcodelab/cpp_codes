#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    if (a > b && a > c)
       {
		cout << a << " is the greatest number" << endl;
    else if (b > c)
        cout << b << " is the greatest number" << endl;
    else
        cout << c << " is the greatest number" << endl;

    return 0;
}

