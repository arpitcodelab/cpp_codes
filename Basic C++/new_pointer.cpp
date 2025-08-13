#include <bits/stdc++.h>
using namespace std;

int main() {
    int *p = new int [5]{1,2,3,4,5}; // allocation of memory;
    for(int i =0 ; i < 5 ; i++){
            cout << p[i] << " ";
    }
    cout << endl ;
    delete []p; // deallocation of memory;
    return 0;
}