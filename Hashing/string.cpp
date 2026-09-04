#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int hash[256] = {0};
    for(int i=0;i<s.length();i++){
        hash[s[i]]++;
    }
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while(q--){ 
        char c;
        cout << "Enter a character to query: ";
        cin >> c;
        cout << "The frequency of '" << c << "' is: " << hash[c] << endl;
    }
    return 0;
}