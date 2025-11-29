#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinaryMethod1(int n){
    int binaryNo = 0;
    int i = 0;

    while(n > 0){
        int bit = n % 2;
        binaryNo = bit * pow(10, i++) + binaryNo;
        n = n / 2;
    }
    return binaryNo;
}

int decimalToBinaryMethod2(int n){
    int binaryNo = 0;
    int i = 0;

    while(n > 0){
        int bit = n & 1;
        binaryNo = bit * pow(10, i++) + binaryNo;
        n = n >> 1;
    }
    return binaryNo;
}


int binaryToDecimal(int n){
    int decimalNo = 0;
    int i = 0;
    while(n){
        int bit = n % 10;
        decimalNo = bit * pow(2, i++) + decimalNo;
        n = n / 10;
    }
    return decimalNo;
}
int main(){
    int n;
    cin >> n;

    int decimalToBinaryM1 = decimalToBinaryMethod1(n);
    cout << decimalToBinaryM1 << endl;

    int decimalToBinaryM2 = decimalToBinaryMethod2(n);
    cout << decimalToBinaryM2 << endl;

    int binaryToDecimalM1 = binaryToDecimal(n);
    cout << binaryToDecimalM1 << endl;

    return 0;

}