#include <bits/stdc++.h>
using namespace std;


int main() {
    int n1 , n2;
    int gcd =1;
     cout << "n1:- ";
     cout << "n2:-  ";
     cin >> n1 >> n2;
     for (int i =1 ; i <=min(n1,n2) ; i++){
        if (i % n1 ==0 && i % n2 == 0){
                gcd = i;
        }
        cout << gcd ;
     }
    return 0;
}