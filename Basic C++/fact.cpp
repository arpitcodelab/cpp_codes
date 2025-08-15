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

// using reccursion 

int fact(int n){
	if (n == 0 )
	 return 0;
	if ( n == 1)
	 return 1 ;
	else 
	 return n + fact(n-1);  
}
int main (){
	int a ;
	cout << "enter a :- ";
	cin >> a;
	cout << "fact of "<< a << " is :- "<< fact(a);
	return 0;
}