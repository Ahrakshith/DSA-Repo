class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        string ans="";
        int i=0,j=0;
        int count=1;
        int ind1,ind2;
        while(i<n && j<m){

            if(count%2==0){
            ans+=word2[j];
            j++;
            count++;
            
            }
            else {
                ans+=word1[i];
                i++;
                count++;
                
            }
      
        }

        ans+=word1.substr(i);
        ans+=word2.substr(j);


        
        return ans;
    }
};