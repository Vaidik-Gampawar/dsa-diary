#include<iostream>
#include<climits>
#include<limits.h>
using namespace std;


bool findTarget(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}

int findMax(int arr[], int size){
    int maxAns = INT_MIN;
    for(int i = 0; i < size; i++){
        /*
        if(maxAns < arr[i]){
            maxAns = arr[i];
        }
        */

        // OR

        maxAns = max(maxAns, arr[i]);
    }
    return maxAns;
}

int findMin(int arr[], int size){
    int minAns = INT_MAX;
    for(int i = 0; i < size; i++){
        minAns = min(minAns, arr[i]);
    }
    return minAns;
}

void findZeroAndOne(int arr[], int size){
    int zero = 0;
    int one = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            zero++;
        } else if (arr[i] == 1){
            one++;
        }
    }

    cout << "Total no. of 0's are : " << zero << endl;
    cout << "Total no. of 1's are : " << one << endl;
}

int main(){
    int arr[100];
    int size;

    cout << "Enter size : ";
    cin >> size;

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int target;
    cout << "Element to be searched in array : " << endl;
    cin >> target;

    int result = findTarget(arr, size, target);
    cout << result << endl; 

    int max = findMax(arr, size);
    cout << "Max number is : " << max << endl;

    int min = findMin(arr, size);
    cout << "Min number is : " << min << endl;

    findZeroAndOne(arr, size);

    return 0;
}