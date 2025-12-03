#include<iostream>
using namespace std;

void fullPyramid(int n){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n-row-1; col++){
            cout << " ";
        }

        for(int col = 0; col < row + 1; col++){
            cout << "* ";
        }
        cout << endl;
    }
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

    for(int row = 0; row < n; row ++){
        for(int col = 0; col < row; col++){
            cout << " ";
        }

        for(int col = 0; col < n-row; col++){
            cout << "* ";
        }
        cout << endl;
    }
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
}

void hollowInvertedFullPyramid(int n){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < row; col++){
            cout << " ";
        }

        for(int col = 0; col < n-row; col++){
            if(row == 0 || row == n-1 || col == 0 || col == n-row-1){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void hollowDiamond(int n){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n-row-1; col++){
            cout << " ";
        }

        for(int col = 0; col < row + 1; col++){
            if(row == 0 || col == 0 || col == row + 1 - 1){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    for(int row = 0; row < n; row++){
        for(int col = 0; col < row; col++){
            cout << " ";
        }

        for(int col = 0; col < n-row; col++){
            if(row == n-1 || col == 0 || col == n-row-1){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void mixPyramid(int n){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n-row; col++){
            cout << "* ";
        }

        for(int col = 0; col < 2*row+1; col++){
            cout << "  ";
        }

        for(int col = 0; col < n-row; col++){
            cout << "* ";
        }
        cout << endl;
    }

    for(int row = 0; row < n; row++){
        for(int col = 0; col < row+1; col++){
            cout << "* ";
        }

        for(int col = 0; col < 2*(n-row)-1; col++){
            cout << "  ";
        }

        for(int col = 0; col < row+1; col++){
            cout << "* ";
        }

        cout << endl;
    }
}

void fancy12(int n){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < 2*row+1; col++){
            if(col%2==0){
                cout << row+1;
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void fullFancy12(int n){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < 2*row+1; col++){
            if(col%2==0){
                cout << row + 1;
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }

    n--;

    for(int row = 0; row < n; row++){
        for(int col = 0; col < 2* (n-row)-1; col++){
            if(col%2==0){
                cout << n-row;
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void ABCBA(int n){
    for(int row = 0; row < n; row++){
        char ch = 'A';
        for(int col = 0; col < row+1; col++){
            cout << ch;
            ch++;
        }

        ch--;

        while(ch > 'A'){
            ch--;
            cout << ch;
        }
        cout << endl;
    }
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
    hollowDiamond(n);
    mixPyramid(n);
    fancy12(n);
    fullFancy12(n);
    ABCBA(n);
    return 0;
}