#include <iostream>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length + breadth);
    }
};

int main(){
    Rectangle r1 , r2;

    r1.length=20;
    r1.breadth=40;
    cout << "Area of r1:- "<< r1.area() << endl;
    cout << "Perimeter of r1:- "<< r1.perimeter() << endl;
    r2.length=50;
    r2.breadth=65;
    cout << "Area of r2:- "<< r2.area() << endl;
     cout << "Perimeter of r2:- "<< r2.perimeter() << endl;
}