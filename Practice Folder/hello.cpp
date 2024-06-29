//print 10 to 1 number (reverse number)
#include <iostream>
using namespace std;

int main() {
    int num,j;
    cin >> num >> j;
    for(int i = num; i>=j; i-- ){
        cout<< i << " ";
    }
}
