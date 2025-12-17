#include <iostream>
using namespace std;

pair<int, int> checkTwoSum(int arr[], int size, int target)
{
    pair<int, int> ans = make_pair(-1, -1);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int sum = arr[i] + arr[j];
            if (sum == target)
            {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    return ans;
}


void checkTwoSumUsingArray(int arr[], int size, int target, int ans[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int sum = arr[i] + arr[j];
            if (sum == target)
            {
                ans[0] = arr[i];
                ans[1] = arr[j];
            }
        }
    }
}

void printAllPairs(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int sum = arr[i] + arr[j];
            if (sum == target)
            {
                cout << "(" << arr[i] << ", " << arr[j] << ")";
            }
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {10, 5, 20, 15, 30};
    int size = 5;
    int target = 35;
    int result[2] = {-1, -1};  

    //Using pair
    /*
    pair<int, int> ans = checkTwoSum(arr, size, target);
    if (ans.first == -1 && ans.second == -1)
    {
        cout << "Pair not found" << endl;
    }
    else
    {
        cout << "Pair found : " << ans.first << ", " << ans.second << endl;
    }
    */
    
    /*
    checkTwoSumUsingArray(arr, size, target, result);
    if (result[0] == -1 && result[1] == -1)
    {
        cout << "Pair not found" << endl;
    }
    else
    {
        cout << "Pair found : " << result[0] << ", " << result[1] << endl;
    }
    */
    
    printAllPairs(arr, size, target);

    
    return 0;
}