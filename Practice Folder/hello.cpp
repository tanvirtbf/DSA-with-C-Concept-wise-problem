//calculate power of number
#include <iostream>
using namespace std;

int main() {
    /*int n , i ;
    cout << "please enter n " << endl;
    cin >> n;
    for(i = 1; i<=10; i++){
        cout << endl << i*n << endl;
    }
    //n = 2; p = 3 ; result = 2 power 3 = 2 * 2 * 2 * 2 * 2

    int n, p , result;
    cin >> n >> p;
    result = n;
    for(int i = 1; i<p; i++){
        result *= n;
    }
    cout << result << endl;

    int n, pow, r, i;
    cout << "please enter a number : " << endl;
    cin >> n ;
    cout << "please enter a power : " << endl;
    cin >> pow;
    r = n;
    for(i = 1; i<pow; i++){
        r = r * n;
    }
    cout << r << endl;
    // sum of n Natural number
    int n , result=0;
    cout << "please enter a number : " << endl;
    cin >> n;
    for(int i = 1; i <=n; i++){
        result = result +  i;
    }
    cout << result << endl;*/
    // another technic
    int n ;
    cin >> n;
    cout << (n * (n+1)) / 2;

}
