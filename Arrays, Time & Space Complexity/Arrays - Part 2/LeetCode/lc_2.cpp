/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]
*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void twoSum(int arr[], int size, int target, int ans[]) {
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] + arr[j] == target){
                ans[0] = i;
                ans[1] = j;
            }
        }
    }
}

int main(){
    int arr[] = {10, 20, 30, 40};
    int size = 4;
    int target = 50;
    int ans[2] = {-1, -1};

    twoSum(arr, size, target, ans);

    if(ans[0] == -1 && ans[1] == -1){
        cout << "Pair not found!!";
    } else {
        cout << "Pair found : " << "(" << ans[0] << ", " << ans[1] << ")";
    }

    return 0;
}


