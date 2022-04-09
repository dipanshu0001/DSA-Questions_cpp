#include <iostream>
using namespace std;
// void segregate0and1(int arr[], int n)
// {
//     // code here
//     // /// aproach first
//     // int e=0;int end=n-1;
//     // for(int i=0;i<n;i++){
//     //     // if(e<end){
//     //         if(arr[i]==0){
//     //             int temp=arr[e];
//     //             arr[e]=arr[i];
//     //             arr[i]=temp;
//     //             e++;

//     //         }
//     //         else{
//     //             int temp=arr[end];
//     //             arr[end]=arr[i];
//     //             arr[i]=temp;
//     //             end--;
//     //         }
//     //     // }
//     // }
//     ////second aproach
//     int start = 0;
//     int end = n - 1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             start++;
//         }
//         else if (arr[i] == 1)
//             end--;
//         else
//         {
//             int temp = arr[i];
//             arr[i] = arr[end];
//             arr[end] = temp;
//             start++;
//             end--;
//         }
//     }
// }

// void rotateArr(int arr[], int d, int n){
//     // code here
//     for(int i=0;i<n;i++){
//         if(i<d){
//             int temp=arr[i];
//             arr[i]=arr[n-1-i];
//             arr[n-1-i]=temp;
//         }
//     }

// }
int equilibriumPoint(long long a[], int n)
{

    // Your code here
    long lsum=0;int rsum = 0;
    // if (n == 1)
    // {
    //     return 1;
    // }
    // else
    // {
        for (int i=0;i<n;i++)
        {
            lsum += a[i];
            rsum += a[n-1-i];
            if (lsum == rsum)
            {
            // cout<<lsum<<" "<<rsum;
                // return (i + 1+" "+lsum+rsum);
                
                
            }
        }
        
    // }
    // if(lsum!=rsum){
    //     return -1;}

}
int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // segregate0and1(arr,n);
    cout << equilibriumPoint(arr, n);

    // for(int i=0;i<n;i++
    // ){
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}