#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    int arr[]={1,1,2,2,3,4,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    n=removeDuplicates(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}