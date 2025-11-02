#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> i;
    cout << "size:- "<<i.size()<<endl; 

    i.push_back(2);

    i.push_back(3);

    cout << "size after insert :- "<< i.size()<<endl; // size batat hai how much element in this.

    cout << "Capacity before delete :- "<<i.capacity()<<endl;

    i.pop_back();

    cout << "Capacity after delete :- "<<i.capacity()<<endl; //capacity mtlb ktine memroy assign hua tha ya hai 

    i.shrink_to_fit();

    cout << "After shrink :- "<<i.capacity()<<endl;

    i.push_back(2);

    i.push_back(3);

    i.push_back(4);

    i.push_back(5);

    for (int &x : i){ //use this because any modification you want so you made it 
        x += 5; // modification 
        cout << x << " ";
    }

    // iterating thorugh STL Pointer concept

    for (vector <int> :: iterator it = i.begin() ; it!=i.end();it++){
        cout << *it << endl;
    }

    // use of auto 
    for ( auto it =i.rbegin(); it!=i.rend(); it++){ //this is fo reverse 
        cout << *it <<" "<<endl;
    }
    
    return 0;
}