#include <iostream>
using namespace std;

int main() {
    int row=5,col=5;
    for(int i=1; i<=row;i++){
        //space printing...
        for(int j = 1; j<=col-i; j++){
            cout << " ";
        }
        //number printing...
        for(int j = 1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }
    int r=5,c=5;
    for(int i = 1; i<=r; i++){
        for(int j = 1; j<=c-i; j++){
            cout << " ";
        }
        for(int j = 1; j<=i; j++){
            char a = 'A';
            a = a + j-1;
            cout << a;
        }
        cout << endl;
    }
}
