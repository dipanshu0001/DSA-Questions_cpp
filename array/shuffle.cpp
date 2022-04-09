#include<iostream>
using namespace std ;
// void shuffle(int arr,int n){
//     for(int i=0;i<n-1;i++){
//         if(((arr[i]-(i+1))==1)||(((i+1)-arr[i])==1)){
//             int t=arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=t;        }
//     }
// }
int main(){
    int q;cin>>q;
    while(q>0){
int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for(int i=1;i<=n-1;i++){
        if((arr[i]+(i))%2==0){
            int t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;        }
    }
     for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    int b[n];
        int sum=0;
    for(int i=1;i<=n;i++){
        b[i]=(arr[i]+i)%2;  
        sum +=b[i];  }
        // for(int i=0;i<n;i++){

        // }
    for(int i=1;i<=n;i++){
        cout<<b[i]<<" ";
    }
    cout<<sum<<endl;
    q--;

    }


return 0;
}