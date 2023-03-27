#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> get_max_among_k(int *arr,int &n,int &k){
    // time complexity:o(n) space:o(k) max we will store k elements 
    vector<int> result;
    if(k>n){
        int max_ele=-1;
        for(int i=0;i<n;i++)max_ele=max(max_ele,arr[i]);
        result.push_back(max_ele);
        return result;
    }

    queue<int> q;
    int i=0,j=0;
    while(j<n){
        while(!q.empty() and q.front()<arr[j]){
            q.pop();
        }
        q.push(arr[j]);
        if((j-i+1)<k)j++;
        else if((j-i+1)==k){
            result.push_back(q.front());
            if(q.front()==arr[i])q.pop();
            i++;
            j++;
        }
    }
    return result;
}
void display(vector<int> result){
    for(int i=0;i<result.size();i++)cout<<result[i]<<" ";
    cout<<endl;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> result_opt=get_max_among_k(arr,n,k);
    display(result_opt);

return 0;
}