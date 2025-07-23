#include<iostream>
using namespace std;
int main()
{   int a ,b,option;
	cout<< "CALCULATOR \n";
	cout<< "1:add"<<endl<<"2:sub"<<endl;
	cout << "enter a choice"<<endl;
	cin>> option;
	cout << "enter the numbers:-";
	cin>>a>>b;
	switch(option)
	{
		case 1: cout << a+b ;
			break;
	}
	return 0;
}
