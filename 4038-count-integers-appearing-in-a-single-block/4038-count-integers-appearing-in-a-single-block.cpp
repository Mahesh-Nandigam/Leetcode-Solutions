class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        vector<int>count(101,0);
        int n=nums.size();
        count[nums[0]]=1;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1])
            count[nums[i]]++;
        }
        int ct=0;
        for(int i=1;i<=100;i++){
            if(count[i]==1)
            ct++;
        }
        return ct;
    }
};