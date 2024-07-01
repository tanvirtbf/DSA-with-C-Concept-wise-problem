#include <iostream>
using namespace std;

int main() {
    int row, col;
    cin >> row ;
    col = row * 2 - 1;
    int left = row, right = row;
    for(int i = row ; i>=1; i--){
        for(int j = left; j<=right; j++){
            cout << "*";
        }
        left = left -1;
        right = right +1;
        cout << endl;
    }
}
