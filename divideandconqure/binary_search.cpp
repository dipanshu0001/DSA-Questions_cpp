#include <iostream>
using namespace std;
////searching in array
int binarySearch(int arr[], int l, int r, int x){
    while (l <= r) {
        int m = (l + (r) )/ 2;
  
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
  
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
  
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
  
    // if we reach here, then element was
    // not present
    return -1;
}
    
    


int main()
{
    ////linear search in array
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // int j;
    // cin >> j;
    // for (int i = 0; i < n; i++)
    // {
    //     if (j == arr[i])
    //     {
    //         cout << i << endl;
    //     }
    // }
    /////here time complexity is o(n);

    /////binary search ///array should be sorted
   int k;
    cin>>k;int arr[k];
    for(int i=1;i<=k;i++){cin>>arr[i];}
    int f;cin>>f;

    int s = 0;
    int l = k;
    while (s <= l)
    {
        // cout<<"helo"<<endl;
        int mid = (s + l) / 2;
        if (arr[mid] == f)
        {
            cout<<mid<<endl;
            break;
        }
        else if (f< arr[mid])
        {
            l = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    

    return 0;
}