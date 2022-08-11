//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // time compleaity o(n^2)
    // int maxIndexDiff(int arr[], int N)
    // {
    //     int max_diff = -1;
    //     for (int i = 0; i < N; i++)
    //     {
    //         int j = N - 1;
    //         while (j >= i)
    //         {
    //             if (arr[j] >= arr[i])
    //             {
    //                 max_diff = max(max_diff, j - i);
    //                 break;
    //             }
    //             j--;
    //         }
    //     }
    //     return max_diff;
    // }
    /* above we can observe that we are agai n counting larger elment agian and again for each elemnt if we store the max elment upto
    that prev max element in array and for each element apply the binary serach to find that index which is greater than 
    current element this will reduce time to nlogn and space to n
    here array taking up the previous max element and compainrg it with current element and changing acc t0 that

     */
    int maxIndexDiff(int A[], int N) 
    { 
       // nlogn time compleaxity
       vector<int> max_end_element(N+1,INT_MIN);
       for(int i=N-1;i>=0;i--){
           max_end_element[i]=max(max_end_element[i+1],A[i]);
       }
       int max_diff=-1;
       for(int i=0;i<N;i++){
           int low=i+1;int high=N-1;
           int ans=i;
           while(low<=high){
               int mid=(low+high)/2;
               if(A[i]<=max_end_element[mid]){
                   low=mid+1;
                   ans=max(ans,mid);
                   
               }
               else high=mid-1;
           }
           max_diff=max(max_diff,(ans-i));
           
           
       }
       return max_diff;
       
    }
};

int main()
{
    int T;
    // testcases
    cin >> T;
    while (T--)
    {
        int num;
        // size of array
        cin >> num;
        int arr[num];

        // inserting elements
        for (int i = 0; i < num; i++)
            cin >> arr[i];
        Solution ob;

        // calling maxIndexDiff() function
        cout << ob.maxIndexDiff(arr, num) << endl;
    }
    return 0;
}
// } Driver Code Ends