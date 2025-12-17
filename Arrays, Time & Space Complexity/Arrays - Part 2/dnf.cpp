#include <iostream>
using namespace std;

void dnfSort(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        else if (arr[i] == 1)
        {
            oneCount++;
        }
        else if (arr[i] == 2)
        {
            twoCount++;
        }
    }

    fill(arr, arr + zeroCount, 0);
    fill(arr + zeroCount, arr + zeroCount + oneCount, 1);
    fill(arr + oneCount + twoCount, arr + size, 2);
}

void dnfSortUsingLoop(int arr[], int size){
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        else if (arr[i] == 1)
        {
            oneCount++;
        }
        else if (arr[i] == 2)
        {
            twoCount++;
        }
    }

    for(int i = 0; i < zeroCount; i++){
        arr[i] = 0;
    }

    for(int i = zeroCount; i < zeroCount+oneCount; i++){
        arr[i] = 1;
    }

    for(int i = zeroCount+oneCount; i < size; i++){
        arr[i] = 2;
    }
}

int main()
{
    int arr[] = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    // dnfSort(arr, size);
    dnfSortUsingLoop(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}