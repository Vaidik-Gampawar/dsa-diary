#include<iostream>
using namespace std;

int main(){
    int totalRows;
    cout << "Enter no. of rows : ";
    cin >> totalRows;

    /*
    for(int row = totalRows; row > 0; row--){
        for(int col = row; col > 0; col--){
            cout << "* ";
        }
        cout << endl;
    }
    */

    for(int row = 0; row < totalRows; row++){
        for(int col = 0; col < totalRows - row; col++){
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}