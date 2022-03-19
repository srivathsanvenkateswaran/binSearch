#include <bits/stdc++.h>
using namespace std;

int binSearchDescending(vector<int>& arr, int key)
{
    int left = 0;
    int right = arr.size() - 1;
    int mid = 0;

    while(left <= right)
    {
        mid = left + (right - left)/2;

        if(arr[mid] == key)
        {
            break;
        }
        else if(arr[mid] > key)
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

int main()
{
    vector<int> arr = {20, 17, 15, 14, 13, 12, 10, 9, 8, 4};

    int key = 4;

    cout << binSearchDescending(arr, key) << '\n';

    return 0;
}