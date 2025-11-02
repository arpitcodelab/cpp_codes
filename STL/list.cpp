 #include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> f;   // doubly linked list

    f.push_front(30);  // list = {30}
    f.push_back(40);   // list = {30, 40}
    f.push_back(50);   // list = {30, 40, 50}
    f.push_back(80);   // list = {30, 40, 50}
    f.push_back(60);   // list = {30, 40, 50}
    f.push_back(10);   // list = {30, 40, 50}
    f.pop_front();     // removes 30 → list = {40, 50}
    f.pop_back();      // removes 50 → list = {40}

    cout << f.front() << " " << f.back() << endl; // prints first & last element
    cout << f.size() << endl;

    // print all values using iterator
    for (auto it = f.begin(); it != f.end(); it++) {
        cout << *it << " ";   // dereference iterator to get value
    }

    return 0;
}
