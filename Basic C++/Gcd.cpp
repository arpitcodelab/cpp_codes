#include<iostream>
using namespace std;
int main(){
	int m,n ;
	cout << "enter two number :- ";
	cin >> m>>n;
	while (m!=n){
		
		if (m>n){
			m=m-n;
		}else{
			(n>m);{
				n=n-m;
			}
		}
	}
	cout << "GCD IS :"<<m;
	return 0;
}
