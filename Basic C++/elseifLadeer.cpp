#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "DAY ACT TO NUMBER\n";
	cout <<"Enter a number :- ";
	cin >> a;
	
	if(a<=0){
	
		cout<<"invalid number";
		
	}
		else if (a==1){
		cout<<" sunday";
		
	}
		else if (a==2){
		cout << "monday";
		
	}
		else if (a==3){
		
	    cout << "tuesday";
    }
    	else if (a==4){
    		cout << "Wednesday";
	}
		else if (a==5){
    		cout << "thursday";
	}
		else if (a==6){
    		cout << "friday";
	}
		else if (a==7){
		
    		cout << "saturday";
	}	
		else if (a>7){
		
    		cout << "invalid";
	}	
	return 0;
}
