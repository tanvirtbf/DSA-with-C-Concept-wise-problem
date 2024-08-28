#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {4,11,30,5,2};
    
    for(int i = 1; i<n; i++){
        for(int j = 1; j<=n-i; j++){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
    
    for(int i = 0; i<n; i++){
        cout << arr[i];
    }
}






















// Ascending order
/*

    int n=5;
    int arr[n] = {2,5,3,1,4};
    
    for(int i=0; i<n; i++){
        int index = i;
        for(int j = i; j<n; j++){
            if(arr[index]>arr[j]){
                index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
        // swap(arr[i],arr[index]);
    }
    
    for(int i = 0 ; i<n; i++){
        cout << arr[i];
    }
    
    
    
    
    // Descending Order
    int n=5;
    int arr[n] = {2,5,3,1,4};
    
    for(int i = 0; i<n; i++){
        int index = i;
        for(int j = i; j<n; j++){
            if(arr[index]<arr[j]){
                index = j;
            }
        }
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }
    for(int i = 0 ; i<n; i++){
        cout << arr[i];
    }

*/
