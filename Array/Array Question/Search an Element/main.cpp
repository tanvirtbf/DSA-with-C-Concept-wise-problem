#include <bits/stdc++.h>
using namespace std;

int main(){
    int result = -1;
    cout << "Enter a Number for searching" ;
    int n;
    cin >> n;
    cout << "Enter 5 Number in Array : " << endl;
    int arr[5] ;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cin >> arr[i];
        if(n==arr[i]){
            result = i;
        }
    }
    cout << result;
    
    // Second Approach
    
    /*
    int result = -1;
    int arr[5];
    cout << "Please Enter 5 number of array : " << endl;
    for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cin >> arr[i];
    }
    cout << "Enter a number for searching.." << endl;
    int n;
    cin >> n;
    for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(n == arr[i]){
            result = i;
        }
    }
    if(result != -1){
        cout << "Find this number in " << result << " number index of arr Array" << endl;
    }else{
        cout << "Not found " << result << endl;
    }
    */
}
