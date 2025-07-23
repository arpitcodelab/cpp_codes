#include <iostream>
#include<cstring>
using namespace std;
void username(string n){
   

    int i = n.find("@");

    string uname = n.substr(0,i);

    cout << "username is :- " << uname << endl;

    
}

int main(){
    string n;
    cout <<  "enter email id :- ";
    cin >> n;
    username(n);
    
    return 0;
}