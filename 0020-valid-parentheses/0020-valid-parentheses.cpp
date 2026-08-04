class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            st.push(s[i]);   //overflowing of Open Braces
            else{
                if(st.empty())
                return false;    //overflowing of Open Braces
                    char top=st.top();
                    if(
                    (top=='(' && s[i]==')')||
                    (top=='{' && s[i]=='}')||
                    (top=='[' && s[i]==']')
                    )
                    st.pop();
                    else
                     return false;
            }

        }
        return st.empty();//Overfolwing of Open braces
    }
};