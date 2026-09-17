class Solution {
public:
void rev(vector<int>&nums,int si,int ei){
    while(si<ei){
        swap(nums[si],nums[ei]);
        si++;
        ei--;
    }

}
    void rotate(vector<int>& nums, int k) {
     k=k%nums.size();
    rev(nums,0,nums.size()-1);
    rev(nums,0,k-1);
    rev(nums,k,nums.size()-1);
    }

};