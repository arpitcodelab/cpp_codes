#include <iostream>
using namespace std;

int main() {
    int x=10;
    int&y=x;
    cout << &y << endl; //adress dega 
    cout << x <<endl;
    cout << y << endl;
    x++; //increament ecome 11
    cout << x << endl;
    y++; // inc become 12
    cout << y << endl;

}