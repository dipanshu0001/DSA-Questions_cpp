//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
// brtue force approach takes o(n^2) time and constant space
    // long long int nineDivisors(long long int N){
    //     long long int cnt=0;
    //     for(int i=36;i<=N;i++){
    //         long long count=0;
    //           for(int j=1;j<=sqrt(i);j++){
    //               if(i%j==0){
    //                   if(i/j==j)count++;
    //                   else{
    //                   count+=2;
    //               }
    //               }
                  
    //           }
    //           if(count==9)cnt++;
    //     }
    //     return cnt;
    // }



    ///////////// below approach takes o(sqrt(N)) space and time
    long long int nineDivisors(long long int N){
        long long int size=sqrt(N);
        vector<long long int> v((int)size+1);
        for(int i=0;i<size+1;i++){
            v[i]=i;
        }
        v[0]=v[1]=-1;
        for(int i=2;i*i<=size;i++){
            if(v[i]==i){
                for(int j=i*i;j<=size;j+=i){
                    v[j]=i;
                }
            }
        }// time complexity of this n(log(log(n)))
        long long int cnt=0;
        for(int i=0;i<=size;i++){
            long long int p=v[i];
            long long int q=v[i/v[i]];
            if(p!=q and p*q==i and q!=1)cnt++;
            else if(v[i]==i){
                if(pow(i,8)<=N)cnt++;
            }
        }
        return cnt;
        
        
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.nineDivisors(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends