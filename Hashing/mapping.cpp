#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: "; 
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    //pre-compute
    map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    // for(auto it: freq){
    //     cout << "Frequency of " << it.first << " is: " << it.second << endl;
    // }
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while (q--) {
        int number;
        cout << "Enter a number to query: ";
        cin >> number;
        //fetch
        cout << "Frequency of " << number << " is: " << freq[number] << endl;
    }
    int maxFreq = 0;
    int maxElement = 0;

   for(auto it : freq){
    if(it.second > maxFreq){
        maxFreq = it.second;
        maxElement = it.first;
    }
    }

  cout << "Maximum occurring element: " << maxElement << endl;
  cout << "Its frequency: " << maxFreq << endl;
    return 0;
}