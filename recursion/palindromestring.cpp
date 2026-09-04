#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s,int i,int n){
    if(i>=n/2) return true;
    if(s[i]!=s[n-i-1]) return false;
    return ispalindrome(s,i+1,n);
}
int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int n = s.length();
    if(ispalindrome(s,0,n)){
        cout << s << " is a palindrome string." << endl;
    }
    else{
        cout << s << " is not a palindrome string." << endl;
    }
    return 0;
}