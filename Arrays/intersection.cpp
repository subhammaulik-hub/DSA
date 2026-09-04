#include<bits/stdc++.h>
using namespace std;
vector<int> InterSectionArray(vector<int>&A,int n,vector<int>&B,int m){
    int i=0,j=0;
    vector<int>ans;
    while(i<n && j<m){
        if(A[i]<B[j]){
            i++;
        }
        else if(A[i]>B[j]){
            j++;
        }
        else{
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
    int n,m;
    cout<<"Enter the size of first array: ";
    cin>>n;
    cout<<"Enter the size of second array: ";
    cin>>m;
    vector<int>A(n);
    vector<int>B(m);
    cout<<"Enter elements of first array: ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter elements of second array: ";
    for(int i=0;i<m;i++){
        cin>>B[i];
    }
    vector<int>ans=InterSectionArray(A,n,B,m);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}