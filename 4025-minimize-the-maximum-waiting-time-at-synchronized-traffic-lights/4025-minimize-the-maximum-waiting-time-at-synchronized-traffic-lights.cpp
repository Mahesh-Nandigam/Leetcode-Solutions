class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        sort(lights.begin(),lights.end(),greater<int>());
        int green=lights[0];
        int max_penalty=INT_MIN;
        int penalty=0;
        for(int i=0;i<arrivalTime.size();i++){
        if(arrivalTime[i]%period<green)
        penalty=0;
        else
        penalty=period-arrivalTime[i]%period;
        max_penalty=max(max_penalty,penalty);
        }
        return max_penalty;

    }
};