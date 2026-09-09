#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int profit=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            int cost=prices[i]-mini;
            profit=max(profit,cost);
            mini=min(mini,prices[i]);
        }
        return profit;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> prices(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    cout<<maxProfit(prices);
    return 0;
}