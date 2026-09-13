class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int n=nums.size();
if(n==1)
return;
if(k>n)
k=k%n;
     vector<int>ans;
     int i=n-k;
     int x=k;
     while(x!=0){
    ans.push_back(nums[i]);
    i++;
    x--;
     }

     for(int j=0;j<n-k;j++)
  ans.push_back(nums[j]);
    
for(int k=0;k<n;k++)
nums[k]=ans[k];

    }
};