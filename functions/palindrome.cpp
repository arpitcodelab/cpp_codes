#include <iostream>
using namespace std;

void pal(int n ){
    int temp = n;
    int rev =0 ;

    while (n>0){
        int m = n%10;
        rev = rev *10 + m;
        n= n / 10;
    }

    if (rev == temp){
            cout << "is palindrome"<< endl;
        } else {
             cout << "not palindrome"<<endl; 
        }
    }

int main(){
    int n;
    cout << "enter the number:- ";
    cin >> n;
     pal(n);
    return 0;
}