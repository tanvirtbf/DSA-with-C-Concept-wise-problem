#include <iostream>
using namespace std;

int main() {
    int row,col;
    cin >> row >> col;
    for(int i = 1; i<=row; i++){
        for(int j = i; j>=1; j--){
            cout << j<< " " ;
        }
        cout << endl;
    }
}
