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
   
int main (){
    int n ;
    cout << "enter the number :- ";
    cin >> n;
    left_num(n);
    return 0;
}
