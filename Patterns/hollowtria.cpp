#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i = 0, j = 0;
    unsigned int n = 0;
    cout << "Enter the number of n = ";
    cin >> n;
    for (i = 1; i <= n; ++i)
    {
        // Print spaces
        for (j = i; j <= n; ++j)
        {
            cout << " ";
        }
        for (j = 1; j <= ((2 * i) - 1); ++j)
        {
            // Print star only first and last row col
            if (i == n || j == 1 || j == ((2 * i) - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        // Print new line
        cout << "\n";
    }
    return 0;
}








































