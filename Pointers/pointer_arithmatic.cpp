#include <iostream>
using namespace std;

int main() {
   int A[5]= {2,3,4,5,6};
   int *p=A;

   cout << *p <<endl;
   p++;                             // yha pr increamaent hua hai , directly nhi kar skte 
                                    // cout << p++ <<endls; ye address dega increment kr ke 3 ka okey 
   cout << *p<< endl;
   p=p+2;
   cout << *p << endl;
   cout << *(p+2)<<endl;

   for(int i=0 ;  i<5 ; i++){
    cout << *(p+i)<<endl;
   }
   
   return 0;    
}