#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int get_done(vector<int> &arr){
    int max_value=*max_element(arr.begin(),arr.end());
    int min_value=*min_element(arr.begin(),arr.end());
    int res=max_value-min_value;
    int _max_value=0;
        for(int i=0;i<arr.size();i++){
            while(arr[i]%2==0){
                arr[i]%=2;
            }
            _max_value=max(_max_value,arr[i]);
        }
    int _min_value=INT_MAX;
        for(int i=0;i<arr.size();i++){
            while(arr[i]%2==1){
                arr[i]*=2;
            }
            _max_value=min(_max_value,arr[i]);
        }
    return max(res,_max_value-_min_value);
}
int main(){
    int n;
    cin>>n;

vector<int> arr(n,0);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<get_done(arr);

return 0;
}