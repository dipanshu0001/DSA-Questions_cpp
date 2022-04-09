#include<iostream>
#include<string>
using namespace std ;

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
bool check; int index=0;
for(int i=0;i<n;i++){
    check=false;
    int temp=arr[i];
    int j=i+1;
    while(temp>arr[j]){
        check=true;
        j++;
        index=temp;

    }
} string s[n];

if(!check){
cout<<index<<endl;
    s[1]=index;
}
return 0;
}