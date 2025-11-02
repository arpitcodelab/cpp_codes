#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 29, 39, 50, 60};

    v.push_back(30); // adds 30 at the end

    cout << "After push_back: ";
    for (int x : v) cout << x << " "; //use of iterator 
    cout << endl;

    v.pop_back(); // removes last element (30)

    cout << "After pop_back: ";
    for (int x : v) cout << x << " "; //use of iterator 
    cout << endl;
    v.shrink_to_fit(); //
    
    cout << "capacity:- " << v.capacity()<<endl;
    return 0;
}
