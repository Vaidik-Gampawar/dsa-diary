#include<iostream>
using namespace std;

int main() {

    int age = 17;
    (age >= 18) ? cout << "You are adult!!" << endl : cout << "You are kid!!" << endl;

    int x = 10;
    int y = 20;
    int result = (x > y) ? x : y;
    cout << "Result : " << result << endl;
    return 0;

}