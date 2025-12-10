#include<iostream>
using namespace std;

void print(int arr[], int size){
    arr[1] = 60;
}

void solve(int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = arr[i] + 10;    
    }

    return;
}

void solve1(int arr[], int n){
    for(int i = 0; i < n; i++){
        arr[i] = arr[i] * 10;
    }

}

int main(){

    //To verify array is "pass by reference"
    /*
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    cout << arr[1] << endl;
    print(arr, size);
    cout << arr[1] << endl;
    */

    /*
    int arr[4] = {0};
    int size = 4;

    solve(arr, size);

    for(int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    */

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    solve1(arr, size);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    

    return 0;
}