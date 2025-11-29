#include<iostream>
using namespace std;

int main() {
    // &(AND) |(OR) ~(NOT) <<(left shift) >>(right shift) ^(XOR)

    cout << (5&4) << endl;
    cout << (5|4) << endl;
    cout << (~5) << endl;
    cout << (5 << 1) << endl;
    cout << (10 >> 1) << endl;
    cout << (5^5) << endl;
}