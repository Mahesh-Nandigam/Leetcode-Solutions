class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        int curr=0;
        int op=INT_MAX;
        for(int r=0;r<n;r++){
        string t=s;
        curr=r;
        rotate(t.begin(),t.begin()+r,t.end());
        int st=0;
        int end=n-1;
        while(st<end){
            int x=abs(t[st]-t[end]);
            curr+=min(x,(26-x));
            st++;
            end--;
        }
       op=min(op,curr);
        }
        return op;
    }
};