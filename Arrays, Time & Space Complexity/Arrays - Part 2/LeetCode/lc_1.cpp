/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:
Input: nums = [2,2,1]
Output: 1

Example 2:
Input: nums = [4,1,2,1,2]
Output: 4

Example 3:
Input: nums = [1]
Output: 1
*/

#include<iostream>
using namespace std;

int findUniqueNumber(int arr[], int size){
    int ans = 0;

    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }

    return ans;
}

int main(){
    int arr[] = {2, 4, 1, 4, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = findUniqueNumber(arr, size);
    cout << "Unique number is : " << ans << endl;
    return 0;
}

