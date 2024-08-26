#include <bits/stdc++.h>
using namespace std;

int main(){
    
    // First Approach
    int maxNum = INT_MIN;
    int n;
    cin >> n;
    int arr[n];
    int temp[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
        if(maxNum<arr[i]){
            maxNum = arr[i];
        }
    }
    int result = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]!=maxNum && result<arr[i]){
            result = arr[i];
        }
    }
    cout << "Second Max Number is : " << result;
    
    

}




