class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        vector<int>ans;
        int n=drones.size();
        for(int i=0;i<n;i++){
            int dist=abs(drones[i][0]-target[0])+abs(drones[i][1]-target[1]);
            if(dist<=drones[i][2]){
               ans.push_back(i); 
            }      
        }
        int min_dist=INT_MAX;
        int min_dist_idx=0;
        for(int i=0;i<ans.size();i++){
            int dist=abs(drones[ans[i]][0]-target[0])+abs(drones[ans[i]][1]-target[1]);
            if(dist<min_dist){
                  min_dist=dist;
                min_dist_idx=ans[i];
            }
        }
        if(ans.size()==0)
        return -1;
        return min_dist_idx;
    }
};