#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i];
    }
}

int main(){
    
    // Second Approach
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int temp = arr[n-1];
    for(int i = n-2; i>0; i--){
        arr[i+1] = arr[i];
    }
    printArr(arr,n);

}























/*

    // First Approach
    int n;
    cin >> n;
    int arr[n];
    int dupArr[n];
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }
    for(int i = 0; i<n; i++){
        if(i!=0){
            dupArr[i] = arr[i-1];
        }else{
            dupArr[i] = arr[n-1];
        }
    }
    for(int i = 0; i<n; i++){
        arr[i] = dupArr[i];
    }
    for(int i = 0; i<n; i++){
        cout << arr[i];
    }

*/
