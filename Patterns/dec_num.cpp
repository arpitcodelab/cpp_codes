#include <iostream>
using namespace std;

void decnum(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j <= n - i + 1)
                cout << j;
        }
        cout << endl;
    }
}

int main (){
    int n ;
    cout << "ENter the number:- ";
    cin  >> n;
    decnum(n);
    return 0;
}