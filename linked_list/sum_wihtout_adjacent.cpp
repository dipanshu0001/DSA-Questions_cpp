#include<iostream>
using namespace std ;
int findmaxsum(int *a,int n){
    int maxsum=-1;
    int i=0;
    while(i<n-1){
        int sum=0;
        int j=i;
        while(j<n){
            sum +=a[j];
            maxsum=max(maxsum,sum);
            j +=2;
        }
        i++;
    }
    return maxsum;

}
int main(){
    int q;cin>>q;
    while(q-->0){
        int n;cin>>n;
        int arr[n];int *a=arr;
        cout<<findmaxsum(a,n)<<endl;
    }

return 0;
}