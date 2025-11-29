#include<iostream>
using namespace std;

int main(){
    char first, middle, last;

    cout << "Enter your full name : ";
    first = cin.get();
    cin.ignore(256,' ');

    middle = cin.get();
    cin.ignore(256, ' ');

    last = cin.get();

    cout << first << middle << last << endl;

    return 0;
}