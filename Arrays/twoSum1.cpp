#include<bits/stdc++.h>
using namespace std;
string twoSum(vector<int>&nums, int target){
    int n=nums.size();
    int left=0,right = n-1;
    while(left<right){
        int sum= nums[left]+nums[right];
        if(sum==target){
            return "True";
        }
        else if(sum<target){
            left++;
        }
        else {
            right--;
        }
    }
    return "False";
}
int main(){
    int n,target;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Enter the target sum: ";
    cin>>target;
    string ans=twoSum(nums,target);
    cout<<ans;
    return 0;
}