#include <bits/stdc++.h>
using namespace std;


struct rectangle {
    int length ;
    int breadth ;
    int height ;

};
int volume (struct rectangle r1) {
     
    
    return r1.length * r1.breadth *r1.height;
}

int main (){
     struct rectangle r1={23,45,34};
     cout << volume(r1); // r1 ko call karenge 
}