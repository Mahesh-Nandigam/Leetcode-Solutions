class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
       map<int,vector<int>>mp;
       int ans=0;
       for(int i=0;i<nums.size();i++) mp[nums[i]].push_back(i);// adding to maap

       for(auto i:mp){
        vector<int>arr=i.second;

        if(arr.size()<3)
        continue;
        bool is=true;
        int spacing=arr[1]-arr[0];
        for(int j=1;j<arr.size();j++){
            if(arr[j]-arr[j-1]!=spacing){
                is=false;
                break;
            }
        }
        if(is)
        ans++;

       } 
       return ans;
    }
};