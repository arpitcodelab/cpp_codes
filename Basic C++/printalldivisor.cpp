#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "N";
    cin >> n;
    for (int i = 1 ; i <= sqrt(n) ; i++){
        if (n % i == 0){
            cout << i << " " ;
        }
    } 
    return 0;
}