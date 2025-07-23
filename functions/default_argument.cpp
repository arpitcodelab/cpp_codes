#include <iostream>
using namespace std;
// c is be taken as default agrument 
int add(int a , int b , int c=0){
   return a+ b + c;
}
int main (){
    int c = add(2,5);
    int d =add (2,4,6);
    int e= add (3,4,0);

    cout << "By defult 0:- " << c <<endl;
    cout << "add:- " << d <<endl;
    cout << "add:- " << e <<endl;
    return 0;
}