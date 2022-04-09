#include <iostream>
using namespace std;
int pair_sum(int arr[], int n, int k)
{
    int low = 0;
    int hight = n - 1;
    int count =0;
    while(low<=hight)
    {
        if ((arr[low] + arr[hight]) < k)
            low++;
        else if ((arr[low] + arr[hight]) > k)
            hight--;
        else if ((arr[low] + arr[hight]) == k){
        count++;
        // cout<<"("<<arr[low]<<","<<arr[hight]<<")"<<endl;
        if(arr[low]==arr[low+1]){
            low++;
        }
        else{

        low++;hight--;}}
            
        // else
        //     return 0;
    }
    return count ;
}
int pair_sum2(int arr[],int n,int k){
    //// time complexity o(n**2);
    int count =0;
    for(int i=0;i<n;i++){
        int j=0;
        while(j<=i){
            if(arr[i]+arr[j]==k){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            count++;j++;}
            else{j++;}

        }
    }
    return  count ;
}
        
        
int main()
{
    ///// time complexity =o(n**2);
    // int n;
    // int k;
    // cin >> n >> k;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] + arr[j] == k)
    //         {
    //             cout << "1";
    //             break;
    //         }
    //     }
    // }
    // cout<<"0";
    // cout << pair_sum(arr, n, k);
    

    return 0;
}