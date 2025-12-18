#include<iostream>
using namespace std;

void fun(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << "Array elements are : ";
        cout << arr[i] << endl;
    }
}

int main(){
    //static allocation array
    // int arr[] = {1, 2, 3, 4, 5}

    //dynamic array allocation
    int n;
    cin >> n;
    int *arr = new int[n];

    for(int i = 0; i < n; i++){
        int data;
        cin >> data;
        arr[i] = data;
    }

    fun(arr, n);



    return 0;
}