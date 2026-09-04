#include<bits/stdc++.h>
using namespace std;
int maxOnes(vector<int>&arr,int N){
    int count=0,maxCount=0;
    for(int i=0;i<N;i++){
        if(arr[i]==1){
            count++;
            maxCount=max(maxCount,count);
        }
        else{
            count=0;
        }
    }
    return maxCount;
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
    int ans=maxOnes(arr,N);
    cout<<"The maximum number of consecutive 1's is: "<<ans;
    return 0;
}