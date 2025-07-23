

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i = 0, j = 0;
    unsigned int n = 0;
    cout << "Enter the number of n = ";
    cin >> n;

    // Print upper part of the arrow
    for (i = 1; i <= n; ++i)
    {
        // Print spaces
        for (j = 1; j <= (n - i); ++j)
        {
            cout << " ";
        }
        // Print star
        for (j = i; j <= n; ++j)
        {
            cout << "*";
        }
        // Print new line
        cout << "\n";
    }
    // Print lower part of the arrow
    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            cout << " ";
        }
        for (j = 1; j <= i; ++j)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

