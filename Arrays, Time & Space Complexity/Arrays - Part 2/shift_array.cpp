#include<iostream>
using namespace std;

void shiftArray(int arr[], int size, int shift){
    int finalShift = shift%size;

    if(finalShift == 0){
        return ;
    }

    //step:1 copy last finalShift elements into temp array
    int temp[10000];
    int index = 0;
    for(int i = size-finalShift; i<size; i++){
        temp[index] = arr[i];
        index++;
    }

    //step:2 shift array elements by finalShift places

    for(int  i = size-1; i>=0; i--){
        arr[i] = arr[i-finalShift];
    }

    //step:3 copy temp elements into original array
    for(int i = 0; i<finalShift; i++){
        arr[i] = temp[i];
    }
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int shift = 2; //cyclically rotate array by 2 places
    
    shiftArray(arr, size, shift);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}