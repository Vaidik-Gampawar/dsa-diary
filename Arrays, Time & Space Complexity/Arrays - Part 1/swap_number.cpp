#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // 1. inbuilt
    /*
    int a = 10;
    int b = 5;
    swap(a, b);
    cout << a << endl;
    cout << b << endl;
    */

    // 2. Using temp variable
    /*
    int a = 10;
    int b = 5;
    int temp = a;
    a = b;
    b = temp;

    cout << a << endl;
    cout << b << endl;
    */

    // 3. Using arithematic method
    /*
    int a = 10;
    int b = 5;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << endl;
    cout << b << endl;
    */

    // 4. XOR bitwise method
    int a = 10;
    int b = 5;

    a = a ^ b;
    b = b ^ a;
    a = a ^ b;

    cout << a << endl;
    cout << b << endl;

    return 0;
}