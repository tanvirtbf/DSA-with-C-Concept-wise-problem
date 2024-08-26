#include <bits/stdc++.h>
using namespace std;

int main(){
    int num = 100;
    int ans;
    int result[num];
    for(int i = 0; i<num; i++){
        result[i] = 0;
    }
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
        result[arr[i]] += 1;
    }
    for(int i = 0; i<num; i++){
        if(result[i]==1){
            ans = i;
            cout << ans << endl;
            return 0;
        }
    }
    
    
}
