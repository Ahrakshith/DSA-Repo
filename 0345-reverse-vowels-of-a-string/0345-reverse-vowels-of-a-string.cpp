class Solution {
public:
    string reverseVowels(string s) {
       int i=0;
       int n=s.size();
       int j=n-1;
        unordered_set<char> mpp={'a','e','i','o','u','A','E','I','O','U'};

       while(i<j){

        while(i<j && mpp.count(s[i])==0) i++;

         while(i<j && mpp.count(s[j])==0) j--;

         if(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
         }
       }
        
       return s;
    }
};