class Solution {
public:
    string reverseWords(string s) {
        string output;
        int n=s.size();
        string ans;
        stack<string> st;
        
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
              ans+=s[i];
            }
            else if(!ans.empty()){
                st.push(ans);
                ans.clear();
              
            }         
            
        }

         if (!ans.empty()) {
            st.push(ans);
        }

         while(!st.empty()){
                    output+=st.top();
                    st.pop();
                    if(!st.empty()) output+=' ';
         }
       
        
        return output;
    }
};