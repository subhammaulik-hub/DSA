#include<iostream>
#include<cmath>
#include <algorithm>
#include <vector>
using namespace std;
void count(int n){
    int cnt=0;
    while(n>0){
         int lastdigit=n%10;
        cnt++;
        n=n/10;
    }
    cout << cnt << endl;
}
void reverse(int n){
    int reversed=0;
    while(n>0){
        int lastdigit=n%10;
        reversed=(reversed*10)+lastdigit;
        n=n/10;
    }
    cout << reversed << endl;
}
void palindrome(int n){
    int original=n;
    int reversed=0;
    while(n>0){
        int lastdigit=n%10;
        reversed=(reversed*10)+lastdigit;
        n=n/10;
    }
    if(original==reversed){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
}
void amstrong(int n){
    int original=n;
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
    }
    if(original==sum){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
}
void divisors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout << i << " ";
        }
    }
    cout << endl;
}
void divisors1(int n){
    std::vector<int> divisor;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            divisor.push_back(i);
            if(i!=n/i){
                divisor.push_back(n/i);
            }
        }
    }
    sort(divisor.begin(),divisor.end());
    for(int i=0;i<divisor.size();i++){
        cout << divisor[i] << " ";
    }
    cout << endl;
}
void prime(int n){
    int cnt=0;
    if(n<=1){
        cout << "Not prime" << endl;
        return;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            cnt=cnt+1;
            }
    }
    if(cnt>0){
            cout << "Not prime" << endl;
        }
        else{
            cout << "Prime" << endl;
        }
}
void GCD(int n1, int n2){
    int gcd=1;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    cout << gcd << endl;
}
int main(){
    int n1,n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    // count(n);
    // reverse(n);
    // palindrome(n);
    // amstrong(n);
    // divisors(n);
    // divisors1(n);
    // prime(n);
    GCD(n1,n2);
    return 0;
}