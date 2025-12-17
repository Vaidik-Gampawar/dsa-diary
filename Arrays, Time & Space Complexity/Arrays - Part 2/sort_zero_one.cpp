#include<iostream>
#include<algorithm>
using namespace std;

void countingMethod(int arr[], int size){
    int zeroCount = 0;
    int oneCount = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            zeroCount++;
        } else if(arr[i] == 1) {
            oneCount++;
        }
    }

    

    
    for(int i = 0; i < zeroCount; i++){
        arr[i] = 0;
    }

    for(int i = zeroCount; i < size; i++){
        arr[i] = 1;
    }
    

}

void inbuilt(int arr[], int size){
    sort(arr, arr+size);
}


int main(){
    int arr[] = {0, 1, 1, 1, 0, 0, 1, 1};
    int size = 8;

    // countingMethod(arr, size);
    inbuilt(arr, size);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}