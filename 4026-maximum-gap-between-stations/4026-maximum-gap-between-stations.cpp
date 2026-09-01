class Solution {
public:
    int maximumGap(string skill, string station) {
        int n=skill.size();
        int m=station.size();
       vector<int>l(n);
       vector<int>r(n);
       int j=n-1;
       for(int i=m-1;i>=0;i--){
        if(j>=0){
            if(skill[j]==station[i]){
            r[j]=i;
            j--;
            }
        }
       }
       j=0;
       for(int i=0;i<m;i++){
        if(j<m){
            if(skill[j]==station[i]){
                l[j]=i;
                j++;
            }
        }
       }
       int maxi=0;
 for(int i=0;i<n;i++){
    int d1=i>0?r[i]-l[i-1]:0;
    int d2=i<n-1?r[i+1]-l[i]:0;
    maxi=max(maxi,max(d1,d2));
 }
 return maxi;
       }
};