#include <bits/stdc++.h>
using namespace std;

int minElement(vector<int>& arr)
{
    int left = 0;
    int right = arr.size() - 1;

    int mid = 0;

    while(left <= right)
    {
        mid = left + (right - left) / 2;

        if(arr[mid] <= arr[(mid+arr.size()-1) % arr.size()] && arr[mid] <= arr[(mid + 1) % arr.size()])
        {
            break;
        }
        else if(arr[mid] >= right)
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

int binarySearch(vector<int>& arr, int left, int right, int key)
{
    int mid = 0;

    while(left <= right)
    {
        mid = left + (right - left) / 2;

        if(arr[mid] == key)
        {
            break;
        }
        else if(arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if(arr[mid] != key)
    {
        mid = -1;
    }

    return mid;
}

int main()
{
    vector<int> arr = {11, 12, 15, 18, 2, 5, 6, 8};

    int key = 15;

    int minimum = minElement(arr);

    cout << max(binarySearch(arr, 0, minimum-1, key), binarySearch(arr, minimum, arr.size()-1, key)) << '\n';

    return 0;
}