#include<iostream>
using namespace std;
int main()
{
	int i, A[5] ={ 1,2,3,4,5};
	
	for (i=0;i<5;i++) // for(auto x:A)
	{
		cout << A[i] <<endl; //cout << x <<endl; 
		
	}
	return 0;
}
