#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int *arr, int n)
{
    // 5 4 3 2 1]
    // worst time complexity:->o(n^2)
    // best time complexity:-> o(n^2)
    // space:o(1)
    for (int i = 0; i < n-1; i++)
    {
        // int j = 0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }



        // while (arr[i] >= arr[j] and j < n)
        // {
        //     swap(arr[i], arr[j++]);
        // }
    }
}
void print_arr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr, n);
    print_arr(arr, n);
    return 0;
}