#include <iostream>
using namespace std;

int main() {
    int row,col;
    char sym = 'a';
    cin >> row >> col;
    for(int i = 0; i<row; i++){
        sym = sym + i;
        for(int j = 1; j<=col; j++){
            cout << sym << " ";
        }
        cout << endl;
    }
}
