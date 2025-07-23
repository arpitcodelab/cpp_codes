#include<iostream>
using namespace std;
int main()
{
	int day;
	cout << "enter day no:- ";
	cin >> day ;
	switch(day)
	{
		case 1 : cout <<"mon";
				break;
		case 2 : cout << "tue";
			break;
		case 3: cout << "wed";
			break;
		default : cout<<"invalid";
			break;
	}
	return 0;
}
