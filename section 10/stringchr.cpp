#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char n1[100] = "programming";
    
    // Find substring "r"
    cout << "strstr: " << strstr(n1, "r") << endl;      // returns "rogramming"

    // Find first occurrence of char 'r'
    cout << "strchr: " << strchr(n1, 'r') << endl;      // returns "rogramming"

    // Find last occurrence of char 'r'
    cout << "strrchr: " << strrchr(n1, 'r') << endl;    // returns "ramming"

    return 0;
}


