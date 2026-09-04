#include<bits/stdc++.h>
using namespace std;
int missingElement(vector<int>&arr,int N){
    int xor1=0,xor2=0;
    int n=N-1;
    for(int i=0;i<n;i++){
        xor2^=arr[i];
        xor1^=(i+1);
    }
    xor1^=N;
    return (xor1^xor2);
}
int main(){
    int N;
    cout<<"Enter the size of array: ";
    cin>>N;
    vector<int>arr(N-1);
    cout<<"Enter elements of array: ";
    for(int i=0;i<N-1;i++){
        cin>>arr[i];
    }
    int ans=missingElement(arr,N);
    cout<<"The missing element is: "<<ans;
    return 0;
}