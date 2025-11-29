#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter an integer : " << endl;
    cin >> n;

    if(cin.fail()){
        cout << "Invalid input" << endl;
    }

    return 0;
}