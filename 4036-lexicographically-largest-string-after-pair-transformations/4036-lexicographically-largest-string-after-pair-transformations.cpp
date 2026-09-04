class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
    vector<string>ans;
        int maxx=1<<25;
    for(int x:nums){
        int num=x/maxx;
        int rem=x%maxx;
        string result;
        result.append(num,'z');
        for(int i=24;i>=0;i--){
            if(rem>>i&1)
            result+='a'+i;
        }
        ans.push_back(result);
    }
    return ans;
    }
};