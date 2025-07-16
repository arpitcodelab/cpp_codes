#include<iostream>
using namespace std;
int main()
{
	int n , i , sum =0 ;
	cout << " PERFECT NUMBER" << endl;
	cout <<" enter the number:- ";
	cin>>n;
	
	for (i=1;i<=n;i++)
	{
		if (n%i==0){
			sum +=i;
		}
	}
	cout << "sum of functionis :- "<< sum ;
	
}
