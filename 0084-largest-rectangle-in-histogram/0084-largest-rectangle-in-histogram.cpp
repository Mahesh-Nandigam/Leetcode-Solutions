class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>nsl(n);
        vector<int>nsr(n);
        stack<int> s;
        //nsl calc
        nsl[0]=-1;
        s.push(0);
        for(int i=1;i<n;i++){
            int curr=heights[i];
            while(!s.empty() && heights[s.top()]>=curr)
            s.pop();

            if(s.empty())
            nsl[i]=-1;

            else
            nsl[i]=s.top();

            s.push(i);
        }

        //cleaning stack
        while(!s.empty())
        s.pop();

        //nsr calc 
        nsr[n-1]=n;
        s.push(n-1);
        for(int i=n-2;i>=0;i--){
            int curr=heights[i];
            while(!s.empty() && heights[s.top()]>=curr)
            s.pop();
            if(s.empty())
            nsr[i]=n;
            else
            nsr[i]=s.top();
            s.push(i);
        }
        int max_area=0;
        for(int i=0;i<n;i++){
            int h=heights[i];
            int w=nsr[i]-nsl[i]-1;
            int area=h*w;
            max_area=max(max_area,area);
        }
return max_area;


    }
};