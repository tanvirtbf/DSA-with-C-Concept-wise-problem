//print multilplication table making
#include <iostream>
using namespace std;

int main() {
    /*int n , i ;
    cout << "please enter n " << endl;
    cin >> n;
    for(i = 1; i<=10; i++){
        cout << endl << i*n << endl;
    }*/
    //n = 2; p = 3 ; result = 2 power 3 = 2 * 2 * 2 * 2 * 2

    int n, p , result;
    cin >> n >> p;
    result = n;
    for(int i = 1; i<p; i++){
        result *= n;
    }
    cout << result << endl;
}
