#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int a[100],b[10];
    for(int i = 0; i<10; i++){
        cin >> arr[i];
        if(i>0 && arr[i]<arr[i-1]){
            cout << "Please Enter a Non-decreasing number : " << endl;
            arr[i] = 0;
            cin >> arr[i];
        }
    }
    for(int i = 0; i<100; i++){
        if(arr[i] == i){
            a[i] = arr[i];
        }
    }
    for(int i = 0; i<100; i++){
        cout << a[i];
    }
}
