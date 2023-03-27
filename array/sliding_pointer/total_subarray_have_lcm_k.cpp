#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution_brute {
    int hcf_rec(int n1,int n2){
        if(n1==n2)return n1;
        if(n1>n2)return hcf_rec(n1-n2,n2);
        return hcf_rec(n1,n2-n1);
    }
    int hcf(vector<int> nums,int i,int j){
        int result=nums[i];
        for(int l=i+1;l<=j;l++){
            result=hcf_rec(nums[l],result);
            if(result==1)return 1;
        }
        return result;
    }
    bool is_lcm(vector<int> nums,int i,int j,int k){
        int result=nums[i];
        int hcf_val=hcf(nums,i,j);
        for(int l=i+1;l<=j;l++)
        {
            result=(nums[l]*result)/hcf_rec(result,nums[l]);
        }
            // cout<<(result/hcf_val)<<endl;
        return (k==result);
    }
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            // if(nums[i]==k)cnt++;
            for(int j=i;j<nums.size();j++){
                if(is_lcm(nums,i,j,k)){
                    // cout<<i<<" "<<j;
                cnt++;}
            }
        }
        return cnt;
    }
};
int main(){
int n,k;
cin>>n;
vector<int> nums(n);
for(int i=0;i<n;i++){
    cin>>nums[i];
}
cin>>k;
Solution_brute s;
cout<<s.subarrayLCM(nums,k);
return 0;
}