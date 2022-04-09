#include<iostream>
using namespace std ;
void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }

    }

}
bool verifyPrime(int n){
  
  bool prime =false;
  for(int i=2;i<n;i++){
    if(n%i==0){
      prime =true;
    }
  }
  if(!prime){
    return true;
  }
  else{
    return false;
  }
}
void bubblesort(int arr[],int n){
    // for(int i=0;i<h-1;i++){
    //     if(arr[i]>arr[i+1]){
    //         int temp=arr[i];
    //             arr[i]=arr[i+1];
    //             arr[i+1]=temp;
    //     }

    // }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }

    }

}
///best case of buuble sort --> o(n)
///worst case of buuble sort --> o(n**2)
void selectionsort(int arr[],int n){
    int min=-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                min=arr[j];
            }
            int k=arr[i];
            arr[i]=min;
            arr[j]=k;
        }
    }
}
/// best case of selection sort -> o(n**2)
/// worst case of selection sort -> o(n**2)
void print(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";



    }
}
void insertsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            cout<<arr[j+1]<<"and"<<arr[j]<<endl;
            j--;
            cout<<"value of j"<<j<<endl;
        }
        arr[j+1]=current;
        cout<<"value of j+1 is "<<j+1<<" :"<<arr[j+1]<<endl;
        
    }
}
//worst case of insertioncase --> o(n**2);
//best case of insertionsort -->  o(n);

int main(){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // sort(arr,n);
    // bubblesort(arr,n);
    // insertsort(arr,n);
    selectionsort(arr,n);
    print(arr,n);

    
    

    
    

        

    
     


    
    

return 0;
}