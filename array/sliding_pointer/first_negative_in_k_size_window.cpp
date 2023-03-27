#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
vector<int> get_first_negative(int *arr,int n,int k){
    // time  comeplexity:o(n*k) space->o(1)
    // worst case when n==k then time->O(n^2)
    vector<int> result;
    for(int i=0;i<n;i++){
        int j=0;
        bool isnegative=false;
        while(j<k and (i+j)<n){
            if(arr[i+j]<0){
                result.push_back(arr[i+j]);
                isnegative=true;
                break;

            }
            j++;
        }
        if(!isnegative){
            result.push_back(0);
        }
    }
    return result;

}
vector<int> get_first_negative_optimized(int *arr,int n,int k){
    // time=>o(n) space=>o(n)
    queue<int> q;
    vector<int> result;
    int i=0,j=0;
    while(j<n){
        if(arr[j]<0){
            q.push(arr[j]);
        }
        if(j-i+1<k){
            j++;
        }
        else if((j-i+1)==k){
            if(q.empty()){
                result.push_back(0);
            }
            else result.push_back(q.front());
            if(!q.empty() and q.front()==arr[i])q.pop();
            i++;
            j++;
        }
        return result;
    }
}
void display(vector<int> v){
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
int n,k;
cin>>n>>k;
int *arr=new int[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector<int> result=get_first_negative(arr,n,k);
vector<int> result_opt=get_first_negative_optimized(arr,n,k);
display(result);
display(result_opt);
return 0;
}