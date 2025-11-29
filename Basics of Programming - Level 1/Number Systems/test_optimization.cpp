#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

// Copy of the functions to test
string decimalToBinaryMethod1(int n){
    if (n == 0) return "0";
    string binary = "";
    while(n > 0){
        int bit = n % 2;
        binary += to_string(bit);
        n = n / 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

string decimalToBinaryMethod2(int n){
    if (n == 0) return "0";
    string binary = "";
    while (n > 0){
        int bit = n & 1;
        binary += to_string(bit);
        n = n >> 1;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

int main(){
    vector<int> test_cases = {0, 1, 5, 10, 1024, 12345};
    for(int n : test_cases){
        string b1 = decimalToBinaryMethod1(n);
        string b2 = decimalToBinaryMethod2(n);
        cout << "N: " << n << " B1: " << b1 << " B2: " << b2 << endl;
        if(b1 != b2) cout << "MISMATCH!" << endl;
    }
    return 0;
}
