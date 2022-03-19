#include <bits/stdc++.h>
using namespace std;

int binSearch(vector<int>& arr, int key)
{
    int left = 0;
    int right = arr.size() - 1;

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

    return mid;
}

int binSearchDescending(vector<int>& arr, int key)
{
    int left = 0;
    int right = arr.size() - 1;

    int mid = 0;

    while(left <= right)
    {
        mid = left + (right - left) / 2;

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

int orderAgnosticSearch(vector<int>& arr, int key)
{
    if(arr.size() == 1) return arr[0];

    if(arr[0] < arr[1])
    {
        return binSearch(arr, key);
    }
    else
    {
        return binSearchDescending(arr, key);
    }
}

int main()
{
    vector<int> arrAsc = {1, 2, 3, 4, 5};
    vector<int> arrDesc = {5, 4, 3, 2, 1};

    int key = 4;

    cout << orderAgnosticSearch(arrAsc, key) << '\n';
    cout << orderAgnosticSearch(arrDesc, key) << '\n';

    return 0;
}