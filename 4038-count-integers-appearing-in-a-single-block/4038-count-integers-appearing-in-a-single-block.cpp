class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        map<int,int>m;
        m[nums[0]]=1;


        for(int i=1;i<n;i++){
        
        if(nums[i]!=nums[i-1] && m.count(nums[i])==0)
        m[nums[i]]=1;

        else if(nums[i]!=nums[i-1] && m.count(nums[i])==1)
        m[nums[i]]=0;


        }
        int ans=0;
        for(auto it:m){
        if(it.second) ans++;
        }

        return ans;
        }
    
};