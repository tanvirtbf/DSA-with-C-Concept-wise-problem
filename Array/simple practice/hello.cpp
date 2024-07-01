//Search an Element of an array (return index number)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,findIndex;
    cout << "Enter Array Size Number : " ;
    cin >> n;
    cout << endl << "Please enter search number : " << endl;
    cin >> findIndex;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
        if(findIndex == arr[i]){
            cout << "Search Number Index is : " << i << endl;
            return 0;
        }
    }
}
