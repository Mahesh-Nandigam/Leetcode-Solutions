class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       stack<int>s;
       s.push(nums[0]);
       int n=nums.size();
       for(int i=1;i<n;i++){
        if(nums[i]!=s.top())
        s.push(nums[i]);
       } 
       vector<int>ans;
       while(!s.empty()){
       ans.push_back(s.top());
       s.pop();
       }
       
       sort(ans.begin(),ans.end());
       for(int i=0;i<ans.size();i++)
       nums[i]=ans[i];
       return ans.size();

    }
};