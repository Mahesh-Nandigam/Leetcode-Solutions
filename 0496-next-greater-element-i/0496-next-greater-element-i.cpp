class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        bool undi;
        vector<int>ans;
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
             if(nums1[i]==nums2[j]){
              if(j==n2-1){
                ans.push_back(-1);
                break;
              }
             for(int k=j+1;k<n2;k++){
             undi=false;
             if(nums2[k]>nums2[j]){
                ans.push_back(nums2[k]);
                undi=true;
                break;
             }
             }
             if(!undi)
             ans.push_back(-1);
             break;
             }
            } 
        }
        return ans;
    }
};