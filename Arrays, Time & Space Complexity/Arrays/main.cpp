#include<iostream>
using namespace std;

int main(){
    int arr[5] = {10, 20, 30, 40, 50}; // Array Intialization
    int arr2[4];
    fill(arr2,arr2+4,23);

    cout << arr2[0] << " " << arr2[1];
    

    
    return 0;
}