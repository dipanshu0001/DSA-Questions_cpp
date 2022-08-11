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
    /* 
    here we have taken sieve of size sqrt(n) as maximum of that divsor can be 
    possible for n after that if we even make it will of no use as example 100 will 
    have max divisors upto 10 only if we take even 11 it will cross the value 100 
    so by seive we find all the prime element upto sqrt(n) an elment which are multiple of prime we stroe thet firsttime which prime number reached their
    now a number have atleast have one divsor which will be prime
    so for each number while taking its  ex 36=>2,2,3,3
    so 2^2 and 3^2 here (2+1)*(2+1) this much divisor 36 will have
    now we e=wanrt 9 divisor so p^2^*q^2=n
    here p and q cant be equal as it will go greater than n and also q cant be 1 
    for ex if we get p^4 then we get 5 divisor but we will get 6 as here q will bt 1 having power 0 which will contrubute 1 from their
    corner case is that if p^8 is their than it is possible to have 9 divisor
    to check 3 conditon p*q!=n and q!=1 and p!=q
    else if chech is that is originally prime by mathcing it with its index if true then check if pow raise to 8 
    that index is less than qeual to n if true than cnt++

    
    
    
    
    
    
    */
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