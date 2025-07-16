#include<iostream>
using namespace std;
int main()
{
	int A[5],n=5, i,key; // taking input from user 
	cout << "enter 5 numbers :-";
	if (n<=5)
	{
	
	for (i=0;i<n;i++)
	{
		cin>> A[i];
	}
	cout << "enter a key value :-";
	cin >> key ;
	for (i=0;i<n;i++)
	{
		if(A[i]==key)
		{
			cout<<"found at "<< i<<endl;
			return 0;
		}
		// no need of else function 
	}
	cout << "not found";
}

else {
	cout<<"enter only 5 number";
}
	return 0;
}
