#include<iostream>
using namespace std;
int main()
{
	int fact, i,n;
	cout << "enter n:- ";
	cin>>n;
	for (i=1;i<=n;i++)
	{
		fact*=i; // fact = fact*i
		
	}
	cout << n<< "!=" << fact;
	
	return 0;
	
}
