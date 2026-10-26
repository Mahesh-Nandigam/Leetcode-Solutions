class Solution {
public:
    int countMagicalPairs(string s) {
         int n=s.size();
        int   ans=0;
        //fixing j prameter
        for(int j=0;j<n-1;j++){
        vector<int>dist1(27,0);
        vector<int>dist2(27,0);  
        map<char,bool>freq;
        int Dist=0;
        for(int i=j;i>=0;i--){
        if(freq[s[i]]==false){
        Dist++;
        freq[s[i]]=true;
        }
        dist1[Dist]++;
        }
        //right
        Dist=0;
        map<char,bool>freq2;
        for(int k=j+1;k<n;k++){
        if(freq2[s[k]]==false){
        Dist++;
        freq2[s[k]]=true;
        }
        dist2[Dist]++;
        }

        for(int m=1;m<=26;m++)
        ans+=dist1[m]*dist2[m];
        
        }
        return ans;
    }
};