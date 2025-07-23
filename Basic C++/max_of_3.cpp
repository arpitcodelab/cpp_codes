#include<iostream>
using namespace std;
int main()
{
	int a , b ,c ;
	cout << "entr a :-\n";
	cin >> a;
	cout << "entr b :-\n";
	cin >> b;
	cout << "entr c :-\n";
	cin >> c;
	if (a>b && a>c)
	{
		cout << " a is greter" <<a;
		
	}
	else if  (b>c){
		cout  << "b is greter number "<< b;
		
	}
	else {
		cout << " c is the greater number " <<c;
	}
	return 0;
}
