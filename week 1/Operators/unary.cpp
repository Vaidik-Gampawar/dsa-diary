#include<iostream>
using namespace std;

int main(){
    // pre-increment ++a
    // post-increment a++
    // pre-decrement --a
    // post-decrement a--

    int a = 5;
    cout << a << endl; // 5
    cout << (++a) << endl; // 6
    cout << (a++) << endl; // printed - 6 but value is 7
    cout << a << endl; // 7
    cout << (--a) << endl; // 6
    cout << (a--) << endl; // printed 6 but value is now 5
    cout << a << endl; // 5


    for(int i = 0; i <= 10; i++){
        cout << i << " ";
    }

    cout << endl;

    for (int i = 10; i >= 1; i--){
        cout << i << " ";
    }

    return 0;
}