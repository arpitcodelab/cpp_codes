#include <iostream>
using namespace std;

void left_num(int n ){
    for (int i=1 ; i<=n ; i++){
        for (int j =1 ; j<=i ; j++){
        cout << i << " ";
   
        }
     cout << endl;
}
    }
   

void left_num1(int n ){
    for (int i=1 ; i<=n ; i++){
        for (int j =1 ; j<=i ; j++){
        cout << j << " ";
   
        }
     cout << endl;
}
    }
   
int main (){
    int n ;
    cout << "enter the number :- ";
    cin >> n;
    left_num(n);
    left_num1(n);
    return 0;

}
