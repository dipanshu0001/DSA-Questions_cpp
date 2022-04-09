#include<iostream>
using namespace std ;
/////// find unique in a dplicate array
int serachunique(int arr[],int n){int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum = xorsum^arr[i];

    }
    return xorsum;
}

int main(){
    int n; cin>>n;int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<serachunique(arr,n);

return 0;
}