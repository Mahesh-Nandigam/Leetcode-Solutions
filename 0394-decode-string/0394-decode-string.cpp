class Solution {
public:
string reverse(string str){
    int st=0;
    int end=str.size()-1;
    while(st<end){
        swap(str[st],str[end]);
        st++;
        end--;
    }
    return str;
}
    string decodeString(string s) {
        stack<char>st;
        string str;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]!=']')
            st.push(s[i]);
            else{
            str="";
            while(st.top()!='['){
                str=str+st.top();
                st.pop();
            }
            st.pop();
            string k;
            while(!st.empty() && isdigit(st.top())){
            k=k+st.top();
            st.pop();
            }
            k=reverse(k);
            int num=stoi(k);

            str=reverse(str);
            for(int i=1;i<=num;i++)
                for(int j=0;j<str.size();j++){
                  st.push(str[j]);    
            }
            }
           }
            string ans="";
            while(!st.empty()){
                ans=ans+st.top();
                st.pop();
            }
            ans=reverse(ans);
            return ans;
    }

};