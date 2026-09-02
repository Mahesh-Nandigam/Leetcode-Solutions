class Solution {
public:
int my_function(int idx,vector<int>&nums){
vector<int>naya;
for(int i=0;i<nums.size();i++){
    if(i!=idx)
    naya.push_back(nums[i]);
}
int x=naya.size();
vector<int>prefix(x);
vector<int>suffix(x);
prefix[0]=naya[0];
suffix[x-1]=naya[x-1];
for(int k=1;k<x;k++) prefix[k]=gcd(naya[k],prefix[k-1]);
for(int z=x-2;z>=0;z--) suffix[z]=gcd(naya[z],suffix[z+1]);
//checking
int count=0;
for(int q=0;q<x-1;q++){
if(prefix[q]==suffix[q+1])
count++;
}
return count;
}
    int maxValidSplits(vector<int>& nums) {
        int n=nums.size();
        int ans=my_function(-1,nums);
        for(int i=0;i<nums.size();i++){
            ans=max(ans,my_function(i,nums));
        }
        return ans;

    }
};