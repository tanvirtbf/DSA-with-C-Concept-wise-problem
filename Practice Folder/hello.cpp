#include <iostream>
using namespace std;

int main() {
    int row=5, col=row * 2 - 1;
    int left = row, right = row;
    for(int i = row ; i>=1; i--){
        for(int j = 1; j<=col; j++){
            if(j>=left && j<=right){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        left = left -1;
        right = right +1;
        cout << endl;
    }
    //Another Technic
    int n = 5, numOfStar = 1;
    for(int i = 1; i<=n; i++){
        //space print
        for(int j = 1; j<=n-i; j++){
            cout << " ";
        }
        //star print
        for(int j = 1; j<=numOfStar; j++){
            cout << "*";
        }
        numOfStar += 2;
        cout << endl;
    }
    //Another Technic
    int a,b,nn;
    cin >> nn;
    for(int a = 1; a<=nn; a++){
        for(int b = 1; b<=nn-a; b++){
            cout << " ";
        }
        for(int b = 1; b<=2*a-1; b++){
            cout << "*";
        }
        cout << endl;
    }
}
