#include <iostream>
using namespace std;
// Pass by value 
void swap(int a , int b){
    int temp ;
    temp =a;
    a=b;
    b=temp ;
}
// pass by address
void swap1(int *a , int *b)
{
    int temp ;
    temp = *a;
    *a= *b;
    *b=temp;
}

// pass by refrence # best 
void swap2(int &a, int &b){
    int temp ;
    temp =a;
    a=b;
    b=temp ;

}
int main(){
    int x=10 , y =20 ;
    swap(x,y);
    cout <<"pass by value:-"<< x << " " << y << endl;
    swap1(&x ,&y);
    cout << "pass by address:- "<< x << " " << y << endl;
    swap2(x,y);
    cout << "pass by Refrence :- "<< x << " " << y << endl;
    return 0;

}