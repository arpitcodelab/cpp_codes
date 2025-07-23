#include <iostream>
using namespace std;

int main() {
   char s[100];
   char s2[100];
   cout << " enter your name :- "; // Arpit Prajapati
   //cin >> s; // Arpit 
   cin.get (s,100); // Arpit Prajpati
   cout << "welcome " <<s<< endl; 
   cin.ignore();
   cout << "enter you name again :- ";
   cin.get(s2,100); // It immediately reads that leftover \n as empty input.
   cout << "welcome "<<s2 << endl;
} 

// instead of get we also use getline 