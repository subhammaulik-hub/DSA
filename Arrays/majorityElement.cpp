#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>&v){
    int n=v.size();
    int count=0;
    int el;
    
    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            el=v[i];
        }
        else if(v[i]==el){
            count++;
        }
        else{
            count--;
        }
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(v[i]==el){
            cnt1++;
        }
    }
    if(cnt1>n/2){
       return el;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=majorityElement(v);
    if(ans==-1){
        cout<<"No majority element found."<<endl;
    }
    else{
        cout<<"Majority element is: "<<ans<<endl;
    }
    return 0;
}