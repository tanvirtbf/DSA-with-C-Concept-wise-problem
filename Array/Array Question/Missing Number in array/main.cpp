#include <bits/stdc++.h>
using namespace std;

int main(){
    
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
}




