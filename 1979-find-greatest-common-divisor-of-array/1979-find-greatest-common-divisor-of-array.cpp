class Solution {
public:
 int gcd(vector<int>nums){
    sort(nums.begin(),nums.end(),greater<int>());
        int n=nums[0];
        int gcd=0;
        for(int i=1;i<=n;i++){
           bool is=true;
            for(int j=0;j<nums.size();j++){
                if(nums[j]%i!=0){
                   is=false;  
                    break;
                }
            }
            if(is)
            gcd=i; 
        }
        return gcd;
    }
    int findGCD(vector<int>& nums) {
       sort(nums.begin(),nums.end()); 
       vector<int>temp;
       temp.push_back(nums[0]);
       temp.push_back(nums[nums.size()-1]);
      return gcd(temp);
    }
};