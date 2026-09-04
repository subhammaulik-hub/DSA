#include<stdlib.h>
#include<iostream>
using namespace std;
void print(int i, int n) {
    if (i >n) {
        return;
    }
    cout << "Subham" << endl;
    print(i + 1, n);
}
void num(int i, int n1) {
    if (i > n1) {
        return;
    }
    cout << i << endl;
    num(i + 1, n1);
}
void revnum(int i, int n2){
    if(i<1){
        return;
    }
    cout << i << endl;
    revnum(i-1,n2);
}
void total(int i,int sum){
    if(i<1){
        cout << "The sum is: " << sum << endl;
        return;
    }
    total(i-1,sum+i);
}
int sum(int n3){
    if(n3<1){
        return 0;
    }
    return n3 + sum(n3-1);
}
int factorial(int n3){
    if(n3<1){
        return 1;
    }
    return n3 * factorial(n3-1);
}
int main() {
    int n;
    int n1;
    int n2;
    int n3 = 6;
    //cout << "Enter the number of times to print: ";
    //cin >> n;
    //cout << "Enter the number to print: ";
    //cin >> n1;
    //cout << "Enter the number to print in reverse: ";
    //cin >> n2;
    //print(1, n);
    //num(1, n1);
    //revnum(n2, n2);
    //total(n1, 0);
    cout << "The sum is: " << sum(n3) << endl;
    cout << "The factorial is: " << factorial(n3) << endl;
    return 0;
}