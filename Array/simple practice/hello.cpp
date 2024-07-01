//Search an Element of an array (return index number)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Now give a number for searching from this array : " << endl;
    int searchNum ;
    cin >> searchNum;
    for(int i = 0; i<n; i++){
        if(searchNum == arr[i]){
            cout << searchNum << " number index is : " << i << endl;
            return 0;
        }
    }
}
