#include<iostream>
using namespace std;
void print2(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << "* ";
        }
        cout << "\n";
    }
}
void print3(int n) {
    for (int i= 1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
}
void print4(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << i << " ";
        }
        cout << "\n";
    }
}
void print5(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = n; j >= i; --j) {
            cout << "* ";
        }
        cout << "\n";
    }
}
void print6(int n) {
    for (int i =0; i < n; i++) {
    // space
    for(int j = 0; j < n - i - 1; j++) {
        cout << " ";
    }
    // star
    for(int j = 0; j < 2 * i + 1; j++) {
        cout << "*";
    }
    // space
    for(int j = 0; j < n - i - 1; j++) {
        cout << " ";
    }
    cout << endl;
    }
}
void print7(int n) {
    for (int i =0; i < n; i++) {
    // space
    for(int j = 0; j < i; j++) {
        cout << " ";
    }
    // star
    for(int j = 0; j < 2 * n - (2 * i + 1) ; j++) {
        cout << "*";
    }
    // space
    for(int j = 0; j < i; j++) {
        cout << " ";
    }
    cout << endl;
    }
}
void print8(int n) {
    for (int i = 0; i <= 2*n; i++) {
       if(i <= n) {
           for (int j = 0; j < i; j++) {
               cout << "*";
           }
       } else {
           for (int j = 0; j < 2*n - i; j++) {
               cout << "*";
           }
       }
       cout << endl;
    }
}
void print9(int n){
    for (int i=1;i<=n;i++){
        //number
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        //space
        for(int j=1;j<=2*(n-i);j++){
            cout << "  ";
        }
        //number
        for(int j=i;j>=1;j--){
            cout << j << " ";
        }
        cout << endl;

    }
}
void print10(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
void print11(int n){
    for(int i=1;i<=n;i++){
        for(char j='A';j<'A'+i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void print12(int n){
    for(int i=1;i<=n;i++){
        for(char j='A';j<='A'+(n-i);j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void print13(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print14(int n){
    for(int i=1;i<=n;i++){
        //space
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        //alphabet
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i-1;j++){
            cout << ch;
            if(j<=breakpoint){
                ch++;
            }else{
                ch--;
            }
        }

        //space
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        cout << endl;
    }

}
void print15(int n){
    for(int i=0;i<n;i++){
        for(char j='E'-i;j<='E';j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void print16(int n){
    int inis=0;
    for(int i=0;i<n;i++){
        //stars
        for(int j=0;j<n-i;j++){
            cout << "* ";
        }
        //space
        for(int j=0;j<inis;j++){
            cout << "  ";
        }
        //stars
        for(int j=0;j<n-i;j++){
            cout << "* ";
        }
        inis+=2;
        cout << endl;
    }
    inis=2*n-2;
    for(int i=0;i<n;i++){
        //stars
        for(int j=1;j<=i+1;j++){
            cout << "* ";
        }
        //space
        for(int j=0;j<inis;j++){
            cout << "  ";
        }
        //stars
        for(int j=1;j<=i+1;j++){
            cout << "* ";
        }
        inis-=2;
        cout << endl;
    }
}
void print17(int n){
    int space=2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n){
            stars=2*n-i;
        }
        //stars
        for(int j=1;j<=stars;j++){
            cout << "* ";
        }
        //space
        for(int j=1;j<=space;j++){
            cout << "  ";
        }
        //stars
        for(int j=1;j<=stars;j++){
            cout << "* ";
        }
        if(i<n){
            space-=2;   
        }
        else{
            space+=2;
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    print17(n);
    return 0;
}