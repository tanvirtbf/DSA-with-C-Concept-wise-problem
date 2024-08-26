#include <bits/stdc++.h>
using namespace std;

int main(){
    
    // Second Approach
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int x = n-1;

    for(int i = 0; i<n/2; i++){
        int temp = arr[x];
        arr[x] = arr[i];
        arr[i] = temp;
        x--;
    }
    for(int i =0; i<n; i++){
        cout << arr[i];
    }
    
    
}




















    // First Approach
    /*
    int n;
    cin >> n;
    int arr[n];
    int reverseArr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        reverseArr[n-i-1] = arr[i];
    }
    for(int i=0; i<n; i++){
        cout << reverseArr[i] ;
    }
    */
