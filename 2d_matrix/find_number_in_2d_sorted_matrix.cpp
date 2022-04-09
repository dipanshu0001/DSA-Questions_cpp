#include<iostream>
using namespace std ;
//array challenges





int main(){
    //transpose of matrix
// int n1,n2;cin>>n1>>n2;
// int arr[n1][n2];
// for(int i=0;i<n1;i++){
//     for(int j=0;j<n2;j++){
//         cin>>arr[i][j];
//     }
// }
// for(int i=0;i<n1;i++){
//     for(int j=0;j<n2;j++){
//         if(j>i){
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//         }
//     }
// }
// for(int i=0;i<n1;i++){
//     for(int j=0;j<n2;j++){
//        cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }
///ends here
//// multiplication between two matrics

// int n3,n4,n5;cin>>n3>>n4>>n5;int arr2[n3][n4];int arr3[n4][n5];
// for(int i=0;i<n3;i++){
//     for(int j=0;j<n4;j++){
//         cin>>arr2[i][j];
//     }
// }
// for(int i=0;i<n4;i++){
//     for(int j=0;j<n5;j++){
//         cin>>arr3[i][j];
//     }
// }int multi[n3][n5];
// for(int i=0;i<n3;i++){
//     for(int j=0;j<n5;j++){
//         multi[i][j]=0;
//     }
// }
// for(int i=0;i<n3;i++){
//     for(int j=0;j<n5;j++){
//         for(int k=0;k<n4;k++){
//             multi[i][j] += arr2[i][k]*arr3[k][j];
//         }
        
//     }
// }
// for(int i=0;i<n3;i++){
//     for(int j=0;j<n5;j++){
//         cout<<multi[i][j]<<" ";
//     }
//     cout<<endl;
// }
////ends here
////// find a number in sorted matrix in ascending order for row and for columns frop top to bottom
int n,m;
cin>>n>>m;int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];

    }
}
cout<<"enter which u want to fing in matrix"<<endl;int target;cin>>target;
int r=0;int c=m-1;bool f=false;
while(r<=n&&c>=0){
    if(arr[r][c]==target){
        cout<<"("<<r<<","<<c<<")"<<endl;
        f=true;
        break;

    }
    else if(arr[r][c]<target){c--;}
    else{r++;}
}
if(!f)
cout<<"founded";
else
cout<<"not founded<<Endl;";


return 0;
}