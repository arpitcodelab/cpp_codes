#include <bits/stdc++.h>
using namespace std;

struct rect {
     int len;
     int bre;
};

struct rect r;

int main(){
    struct rect r={4,5}; // initially the value is 4 ,5 
    
    r.len = 15; 
    r.bre = 12;
    cout << "your length is :- "<< r.len << endl;
    cout << "your breadth is :- "<<r.bre << endl;
    cout << "area is :- "<< r.len* r.bre 
    << endl;
    return 0;
}