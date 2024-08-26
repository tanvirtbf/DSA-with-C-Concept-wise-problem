#include <bits/stdc++.h>
using namespace std;

int main(){
    
    // Second Approach
    int preSum = 0 , afterSum = 0;
    int n;
    cin >> n;
    int arr[n-1];
    for(int i=0; i<n-1; i++){
        cin >> arr[i];
        preSum += arr[i];
    }
    for(int i = 1; i<=n; i++){
        afterSum += i;
    }
    // Or 
    int afterSum2 = (n * (n+1)) / 2;
    int result = afterSum2 - preSum;
    cout << result;
    
    
}
























/*

    // First Approach
    int N;
    cin >> N;
    int arr[N-1];
    for(int i=0; i<N-1; i++){
        cin >> arr[i];
    } 
    for(int i = 1; i<=N; i++){
        if(arr[i-1]!=i){
            cout << i << " is missing in array" << endl;
            return 0;
        }
    }

*/
