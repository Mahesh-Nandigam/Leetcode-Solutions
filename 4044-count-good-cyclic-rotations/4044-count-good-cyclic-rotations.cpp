class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
     long long    int n=nums.size();
       long long  int ans=0;
    unsigned    long long sum=accumulate(nums.begin(),nums.end(),0LL);
     unsigned   long long  fs=0;
       for(int i=0;i<n/2;i++)
       fs+=nums[i];
       for(int i=0;i<n;i++){
        if(fs>(sum-fs))
        ans++;
        fs=fs-nums[i]+nums[(i+n/2)%n];
       }
     return ans;

    }
};