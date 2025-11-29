#include<iostream>
using namespace std;

int main(){
    //Implicit TypeCasting

    //1. int to float
    /*
    int num1 = 10;
    float num2 = 5.5;
    float result = num1 + num2;
    cout << result << endl;
    */

    //2. char to int 
    /*
    char ch = 'A';
    int a = ch + 1;
    cout << a << endl;
    */

    //3. int to char
    /*
    int a = 97;
    char ch = a;
    cout << ch << endl;
    */


    //Explicit TypeCasting

    //1. double to int
    /*
    double pi = 3.14159265;
    int intPi = (int)pi;
    cout << intPi << endl;
    */

    //2. float to char
    /*
    float num = 60.35;
    char ch = (char)num;
    cout << ch << endl;
    */

    //3. int to float
    int a = 10;
    int b = 3.0;
    float c = a / ((float)b);
    cout << c << endl;

    
    
    
    


    



    return 0;
}