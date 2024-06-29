//print n number factorial value
#include <iostream>
using namespace std;

int main() {
    //prime number
    string yesPrime = "This is a prime Number", noPrime="This is not a prime number";
    int n, check=0;
    cin >> n;
    if(n<2){
        cout << noPrime << endl;
        return 0;
    }
    for(int i = 2; i<n; i++ ){
        if(n%i == 0){
            check++;
            cout << noPrime << endl;
            return 0;
        }
    }
    cout << yesPrime << endl;
    return 0;
}
