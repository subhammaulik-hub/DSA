#include<bits/stdc++.h>
using namespace std;
int appearOnce(vector<int>&arr,int N){
    int ans=0;
    for(int i=0;i<N;i++){
        ans^=arr[i];
    }
    return ans;
}
int main(){
    int N;
    cout<<"Enter the size of array: ";
    cin>>N;
    vector<int>arr(N);
    cout<<"Enter elements of array: ";
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int ans=appearOnce(arr,N);
    cout<<"The element that appears only once is: "<<ans;
    return 0;
}