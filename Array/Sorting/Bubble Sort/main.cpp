#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5; 
    int arr[n] = {3,1,4,2,0};
    for(int i = n-2; i>=0; i--){
        for(int j = 0; j<=i; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}






















// Ascending order
/*

    int n = 5;
    int arr[n] = {4,11,30,5,2};
    
    for(int i = n-2; i>=0; i--){
        for(int j = 0; j<=i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    
    
    
    
    // Descending Order
    int n = 5; 
    int arr[n] = {3,1,4,2,0};
    for(int i = n-2; i>=0; i--){
        for(int j = 0; j<=i; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

*/
