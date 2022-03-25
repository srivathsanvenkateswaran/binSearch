#include <bits/stdc++.h>
using namespace std;

int searchInNearlySortedArray(vector<int>& arr, int key)
{
    int left = 0;
    int right = arr.size();

    int mid = 0;

    while(left <= right)
    {
        mid = left + (right - left) / 2;

        if(arr[mid] == key)
        {
            return mid;
        }
        else if((mid-1) && arr[mid-1] == key)
        {
            return mid - 1;
        }
        else if((mid + 1 < arr.size()) && arr[mid+1] == key)
        {
            return mid + 1;
        }
        else if(arr[mid] > key)
        {
            right = mid - 2;
        }
        else
        {
            left = mid + 2;
        }
    }

    return mid;
}

int main()
{
    vector<int> arr = {5, 10, 30, 20, 40};

    int key = 20;

    cout << searchInNearlySortedArray(arr, key) << '\n';

    return 0;
}