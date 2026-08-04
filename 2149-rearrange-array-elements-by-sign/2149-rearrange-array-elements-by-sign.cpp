class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int k=0;
        int m=1;
        for(int i=0;i<n;i++){
        if(nums[i]>0){
        ans[k]=nums[i];
        k=k+2;
        }
        else{
        ans[m]=nums[i];
        m=m+2;
        }
        }
        return ans;
        
    }
};