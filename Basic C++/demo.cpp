#include<iostream>
using namespace std;

int main ()
{
	int n;
	cout << "enter the number of element:- ";
	cin >> n;
	
	int  A[n];
	cout << "enter the vlaues :- ";
	for (int i=0 ; i<n;i++)
	{
		cin>>A[i]; // value store kar diya hmne 
	}
	
	for (int i=0 ; i<n ; i++)
	{
		cout << "{" << A[i]<<"}";
	}
	
	return 0;
}

