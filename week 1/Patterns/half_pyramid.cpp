#include<iostream>
using namespace std;

int main(){
    int totalRow;
    cout << "Enter no. of rows : ";
    cin >> totalRow;
    for(int row = 0; row < totalRow; row++){
        for(int col = 0; col < row+1; col++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}