#include<iostream>
using namespace std;

void fullPyramid(int n){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n-row-1; col++){
            cout << " ";
        }

        for(int col = 0; col < row+1; col++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << "-----------" << endl;
}

void invertedFullPyramid(int n){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < row; col++){
            cout << " ";
        }

        for(int col = 0; col < n-row; col++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << "-----------" << endl;
}

void diamond(int n){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n-row-1; col++){
            cout << " ";
        }

        for(int col = 0; col < row + 1; col++){
            cout << "* ";
        }
        cout << endl;
    }
    
    for(int row = 0; row < n; row++){
        for(int col = 0; col < row; col++){
            cout << " ";
        }

        for(int col = 0; col < n-row; col++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << "-----------" << endl;
}

void hollowFullPyramid(int n){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n-row-1; col++){
            cout << " ";
        }

        for(int col = 0; col < row + 1; col++){
            if(row == 0 || row == n-1 || col == 0 || col == row + 1 - 1){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "-----------" << endl;
}

void hollowInvertedFullPyramid(int n){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < row; col++){
            cout << " ";
        }

        for(int col = 0; col < n-row; col++){
            if(row == 0 || row == n-1 || col == 0 || col == n-row-1){
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "-----------" << endl;
}



int main(){
    cout << "Basics of Programming - Level 2" << endl;

    int n;
    cin >> n;
    
    fullPyramid(n);
    invertedFullPyramid(n);
    diamond(n);
    hollowFullPyramid(n);
    hollowInvertedFullPyramid(n);
    return 0;
}