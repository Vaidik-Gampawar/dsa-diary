#include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimal(int n){
    int i = 0;
    int decimal = 0;
    while(n){
        int bit = n % 10;
        decimal = bit * pow (2, i++) + decimal;
        n = n / 10;
    }
    return decimal;
}

int main(){
    int n;
    cin >> n;
    int decimal = binaryToDecimal(n);
    cout << decimal << endl;
    return 0;
}