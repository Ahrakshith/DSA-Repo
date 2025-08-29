class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int n=s.size();
        string ans;
        string output;


        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                ans+=s[i];
            }
            else if(!ans.empty()){
                st.push(ans);
                ans.clear();
            }
        }


        if(!ans.empty()){
            st.push(ans);
            ans.clear();
        }

        while(!st.empty()){
            string curr=st.top();
            output+=curr;
            st.pop();
            if(!st.empty()) output+= ' ';
        }

        return output;
    }
};