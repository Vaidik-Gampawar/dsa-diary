#include<iostream>
using namespace std;

int decimalToBinaryMethod2(int n){
    int binaryno = 0;
    int i = 0;
    while(n > 0) {
        int bit = n & 1;
        // cout << bit << endl;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n >> 1;
    }
    return binaryno;
}

int main(){
    int n;
    cin >> n;
    int binary = decimalToBinaryMethod2(n);
    cout << binary << endl;;
    return 0;
}