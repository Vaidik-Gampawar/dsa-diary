#include<iostream>
#include<algorithm>
using namespace std;

void reverseArrayMethod1(int arr[], int size){
    int i = 0;
    int j = size - 1;

    while(i < j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

}

void reverseArrayMethod2(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void reverseArrayMethod3(int arr[], int size){
    // Using STL, C++ lib
    reverse(arr, arr + size);
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    // reverseArrayMethod1(arr, size);
    // reverseArrayMethod2(arr, size);
    reverseArrayMethod3(arr, size);
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}