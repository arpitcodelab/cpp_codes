#include<iostream>
using namespace std;
int main()
{
	int fact = 1, i,n; // fact ko declare to kro start kha se krna hia other wise it will become garbage value 
	cout << "enter n:- ";
	cin>>n;
	for (i=1;i<=n;i++)
	{
		fact *= i; // fact = fact*i
		
	}
	cout << n<< "!=" << fact ;
	
	return 0;
	
}

