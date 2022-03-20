#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int>& arr, int key)
{
    int left = 0;
    int right = arr.size() - 1;

    int mid = 0;

    while(left <= right)
    {
        mid = left + (right - left)/2;

        if(key == arr[mid])
        {
            if(mid && arr[mid-1] == key)
            {
                right = mid - 1;
            }
            else break;
        }
        else if(key > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return mid;
}

int lastOccurrence(vector<int>& arr, int key)
{
    int left = 0;
    int right = arr.size() - 1;

    int mid = 0;

    while(left <= right)
    {
        mid = left + (right - left)/2;

        if(key == arr[mid])
        {
            if(mid && arr[mid+1] == key)
            {
                left = mid + 1;
            }
            else break;
        }
        else if(key > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return mid;
}

int countOfElementInSortedArray(vector<int>& arr, int key)
{
    return lastOccurrence(arr, key) - firstOccurrence(arr, key) + 1;
}

int main()
{
    vector<int> arr = {2, 4, 10, 10, 10, 18, 20};

    int key = 10;

    cout << countOfElementInSortedArray(arr, key) << '\n';

    return 0;
}