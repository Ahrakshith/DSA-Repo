class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int max_candy=INT_MIN;

        for(int i=0;i<candies.size();i++){
            max_candy=max(max_candy,candies[i]);
        }

        for(int i=0;i<candies.size();i++){

            int after_extra=candies[i]+extraCandies;
            

            

            if(after_extra>=max_candy){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};