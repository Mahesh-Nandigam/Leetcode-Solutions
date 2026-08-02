class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;

        for(int i=0;i<s.size();i++){
            st.push(s[i]);
        }
        int k=0;
        while(!st.empty()){
            char top=st.top();
            st.pop();
            s[k++]=top;
        }

    }
};