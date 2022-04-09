#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int low, int high)
{
    int pivort = arr[low];
    int i = low;
    int j = high;
    while (i<j)
    {
        do
        {
            i++;
        } while (arr[i] < pivort);
        do
        {
            j--;
        } while (arr[j] > pivort);
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void qucik_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);
        qucik_sort(arr, low, p);
        qucik_sort(arr, p + 1, high);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    qucik_sort(arr, 0, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}