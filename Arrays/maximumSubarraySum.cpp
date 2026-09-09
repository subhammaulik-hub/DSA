#include<bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[],int n){
    long long sum=0;
    long long maxi= LONG_LONG_MIN;
    int start=0;
    int anss=-1, anse=-1;
    for(int i=0;i<n;i++){
        if(sum==0){
            start=i;
        }
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
            anss=start;
            anse=i;
        }
        if(sum<0){
            sum=0;
        }

    }
    for(int i=anss;i<=anse;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return maxi;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxSubarraySum(arr,n);
    return 0;
}