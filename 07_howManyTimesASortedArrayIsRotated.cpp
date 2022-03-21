#include <bits/stdc++.h>
using namespace std;

int numberOfTimesRotated(vector<int>& arr)
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

int main()
{
    vector<int> arr = {11, 12, 15, 18, 2, 5, 6, 8};
    
    cout << numberOfTimesRotated(arr) << '\n';

    return 0;
}