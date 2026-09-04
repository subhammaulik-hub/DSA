#include<iostream>
using namespace std;  
void ReverseArray(int arr[], int start, int end) {  
    while (start <= end) {  
        int temp = arr[start];  
        arr[start] = arr[end];  
        arr[end] = temp;  
        start++;  
        end--;  
    }  
}
void leftRotateByD(int arr[], int d, int n) {  
    if (d == 0)  
        return;  
    d = d % n; // In case d > n  
    ReverseArray(arr, 0, d - 1);  
    ReverseArray(arr, d, n - 1);  
    ReverseArray(arr, 0, n - 1);  
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int d;
    cout << "Enter the number of positions to rotate: ";
    cin >> d;
    leftRotateByD(arr, d, n);
    cout << "Array after left rotation: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}