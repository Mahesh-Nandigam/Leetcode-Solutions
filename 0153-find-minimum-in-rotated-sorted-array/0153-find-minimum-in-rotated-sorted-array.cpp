class Solution {
public:
    int findMin(vector<int>& nums) {
    int n=nums.size();
    if(n==1)
    return nums[0];
    int st=0;
    int end=n-1;
    if(nums[st]<nums[end])
    return nums[0];
int mid=0;
    while(st<=end){
        mid=st+(end-st)/2;
        if(st==end && end==mid)
        return nums[mid];
        if(nums[mid]<=nums[end])
        end=mid;
        else
        st=mid+1;
    }
return -1;
    }
};