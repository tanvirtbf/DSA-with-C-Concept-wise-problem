#include <bits/stdc++.h>
using namespace std;

int main(){
    int temp[5];
    int arr[5] = {3,4,2,1,5};
    for(int i = 0; i<5; i++){
        int var = INT_MAX;
        for(int j = i; j<5; j++){
            if(arr[j]<var){
                var = arr[j];
                temp[j] = var;
            }
        }

    }
    for(int i=0; i<5; i++){
        cout << temp[i];
    }
}
