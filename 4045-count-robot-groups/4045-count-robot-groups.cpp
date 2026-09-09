class Solution {
public:
    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
        int n=speed.size();
       int  ans=n;
       int mn=speed.back();
       for(int i=n-2;i>=0;i--){
        if(mn<speed[i] || (position[i+1]-position[i])<=distance){
        ans--;
        }
        else
        mn=speed[i];
       } 
       return ans;

    }
};