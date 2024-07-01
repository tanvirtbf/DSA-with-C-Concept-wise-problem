#include <iostream>
using namespace std;

int main() {
    int n,main=0,num,r;
    cin >> n;
    num = n;
    while(num!=0){
        int r = num % 10;
        main = main + r;
        num = num / 10;
    }
    cout << main << endl;
}
