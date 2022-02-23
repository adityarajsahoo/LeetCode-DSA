class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mc=0;
        vector<bool> ans;
        for(auto x:candies){
            mc = max(mc,x);
        }
        for(auto x:candies){
            if(x + extraCandies >= mc)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};