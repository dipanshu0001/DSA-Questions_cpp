#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int b_search(int arr[], int s, int e, int x)
{
    if (s < e)
    {
        int mid =  (s + e) / 2;
        if (arr[mid] == x)
            return 1;
        else if (arr[mid] > x)
        {
            b_search(arr, mid + 1, e, x);
        }
        else
            b_search(arr, s, mid - 1, x);
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    cout << b_search(arr, 0, n, x);
    return 0;
}