#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Please Enter your array size : ";
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int result = arr[0];
    for(int i = 0; i<n; i++){
        if(result>arr[i]){
            result = arr[i];
        }
    }
    cout << result << endl;
}
