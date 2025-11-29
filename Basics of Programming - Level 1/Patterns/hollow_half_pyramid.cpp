#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    /*
    for(int row = 0; row < 5; row++){
        int totalColumns = row + 1;
        for(int col = 0; col < totalColumns; col++){
            if(row == 0 || row == 4 || col == 0 || col == totalColumns-1){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    */

    for(int row = 0; row < n; row++){
        int totalColumn = row + 1;
        for(int col = 0; col < totalColumn; col++){
            if(row == 0 || row == n-1 || col == 0 || col == row){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}