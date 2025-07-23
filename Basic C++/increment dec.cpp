#include <iostream>
using namespace std;

int main()
{
    int x = 5, y;
    y = x++;  // Post-increment: y = 5, x becomes 6
    cout << x << " " << y << endl;  // Output: 6 5

    int u = 3, b;
    b = ++u;  // Pre-increment: u becomes 4, b = 4
    cout << u << " " << b << endl;  // Output: 4 4
    
    char v=127; // overflow case 
    ++v;
    cout << v << endl;// error show
    cout<< (int)v; // -128
    

    return 0;
}

