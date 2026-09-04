#include<bits/stdc++.h>
using namespace std;
void revarray(int arr[], int i, int n){
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    revarray(arr, i+1, n);
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    cout << "The reversed array is: ";
    revarray(arr, 0, n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}