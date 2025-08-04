class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen=0;
        int start=0;
        int n=s.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){

            if(mpp.find(s[i])!=mpp.end() && mpp[s[i]]>=start){
                start=mpp[s[i]]+1;
            }

            mpp[s[i]]=i;
            int currWindow=i-start+1;
            maxLen=max(maxLen,currWindow);
        }
        return maxLen;
    }
};