#include <bits/stdc++.h>
using namespace std;

int binSearch(vector<int>& arr, int key)
{
    int left = 0;
    int right = arr.size() - 1;

    int mid = 0;

    while(left <= right)
    {
        mid = (right + left) / 2;

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

    return mid;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int key = 2;

    cout << binSearch(arr, key) << '\n';

    return 0;
}