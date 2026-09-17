class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroes=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                zeroes++;
        }
        int j=-1;
        for(int x:nums){
        if(x!=0)
        nums[++j]=x;
        }

        for(int i=n-1;zeroes>0;zeroes--,i--)
        nums[i]=0;


    }
};