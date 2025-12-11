#include<iostream>
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

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    // reverseArrayMethod1(arr, size);
    reverseArrayMethod2(arr, size);
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}