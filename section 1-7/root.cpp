#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,d;
	cout<<"ROOTS OF QUADRATIC EQUATION\n";
	cout << "enter b:- ";
	cin >> b;
	cout << "enter a:- ";
	cin >> a;
	cout << "enter c:- ";
	cin >> c;
	d=(-b+sqrt(b*b-4*a*c))/(2*a);
	cout << "roots are :- "<< d;
	return 0;
}
