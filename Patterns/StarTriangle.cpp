#include <iostream>
using namespace std;

void startri(int n){
    for (int i =0 ; i <n ; i++){
        for ( int j=0 ; j< n-i-1;j++){
            cout <<" ";
        } 
        for (int j=0 ; j<2*i+1; j++){
            cout << "*" ;
        }
        for (int j=0 ; j <n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}
void startri2(int n){
     for (int i=0 ; i < n ; i++){
        for (int j=0 ; j<i ; j++) {
            cout << " ";
        }
        for (int j=0 ; j < 2*n -2*i-1;j++){
            cout << "*";
        }
        for (int j=0 ; j<i ; j++) {
            cout << " ";
     }
     cout << endl;
}
}







int main (){
    int n;
    cout << "Enter a number :- ";
    cin >> n;
    startri(n);
    startri2(n);
    return 0;
}