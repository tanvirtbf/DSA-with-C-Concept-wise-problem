#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=5, result = INT_MAX;
    int arr[n] = {2,5,3,1,4};
    
    for(int i = 0; i<n; i++){ // i = 1
        int temp = arr[i]; // 5
        for(int j = i; j<n; j++){ // j = 1
            if(arr[j]<arr[i]){
                result = arr[j]; // 3
                arr[j] = temp;
                arr[i] = result; // 3
            }
        }
        result = arr[i]; // 1
    }
    for(int i = 0 ; i<n; i++){
        cout << arr[i];
    }
}
