#include <iostream>
using namespace std;

int main() {
    int A[2][3] = {2,3,4,5,6,7};
    int B[2][3]={3,4,5,6,7,8};
    int c[2][3];

    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            c[i][j] = A[i][j] * B[i][j];
            cout << c[i][j]<<" ";
        }
        cout <<endl;
    }
    return 0;
}
