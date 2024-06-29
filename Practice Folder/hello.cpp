#include <iostream>
using namespace std;

int main() {
    int row,col;
    cin >> row >> col;
    for(int i = row; i>=1; i--){
        for(int j = 1; j<=col; j++){
            if(j>=i){
                cout << "*" << " ";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}
