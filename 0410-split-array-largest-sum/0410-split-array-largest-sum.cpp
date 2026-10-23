class Solution {
public:
bool canSplit(vector<int>&nums,int k,int mid){
int subarrays=0;
int s=0;
for(int i=0;i<nums.size();i++){
s+=nums[i];
if(s>mid){
subarrays++;
s=nums[i];
}
}
return subarrays+1<=k;
}
    int splitArray(vector<int>& nums, int k) {
    int l=*(max_element(nums.begin(),nums.end()));
    int r=accumulate(nums.begin(), nums.end(), 0);
    int res=r;
    while(l<=r){ 
    int mid=l+(r-l)/2;
    if(canSplit(nums,k,mid)){
    res=mid;
    r=mid-1;
    }
    else{
    l=mid+1;
    }
    }

    return res;
    }
};