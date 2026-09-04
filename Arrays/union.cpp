#include<bits/stdc++.h>
using namespace std;
vector<int> SortedArray(vector<int>a,vector<int>b){
    vector<int>c;
    int i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            if(c.size()==0 || c.back()!=a[i]){
                c.push_back(a[i]);
            }
            i++;
        }
        else{
            if(c.size()==0 || c.back()!=b[j]){
                c.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<a.size()){
        if(c.size()==0 || c.back()!=a[i]){
            c.push_back(a[i]);
        }
        i++;
    }
    while(j<b.size()){
        if(c.size()==0 || c.back()!=b[j]){
            c.push_back(b[j]);
        }
        j++;
    }
    return c;
}
int main(){
    vector<int>a={1,1,3,5,7};
    vector<int>b={2,4,6,8};
    vector<int>c=SortedArray(a,b);
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    return 0;
}