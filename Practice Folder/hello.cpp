#include <iostream>
using namespace std;

int main() {
    int row=5,col=5;
    for(int i = 1; i<=row; i++){
        for(int j = 1; j<=col-i+1; j++){
            cout << j << " " ;
        }
        cout << endl;
    }
    //reverse
    int rows=5,cols=5;
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<=i; j++){
            cout << cols - j << " " ;
        }
        cout << endl;
    }
}
