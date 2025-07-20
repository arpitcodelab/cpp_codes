#include<iostream>
using namespace std;

void lstar1 (int n )
{   
	for (int i=0 ; i < n ; i++){
		for (int j =0 ; j < n; j++){
            if (i>=j){
                cout << "*";
            }
		}
		cout << endl;
	}
	
}
void lstar2(int n){
	for (int i=0 ; i < n ; i++){
		for (int j =0 ; j < n; j++){
            if (i<j){
                cout << "*";
            }
		}
		cout << endl;
	}
}

int main (){
	int n;
	cout << "";
	cin>> n;
	lstar1(n);
	lstar2(n);
	return 0;

}