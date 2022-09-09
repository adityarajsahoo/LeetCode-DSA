// https://leetcode.com/problems/the-number-of-weak-characters-in-the-game/discuss/2551826/C%2B%2B-or-Sorting-(NlogN)-Approach
class Solution {
public:
    static bool comp(vector<int> &a,vector<int> &b){
        if(a[0]!=b[0])
            return a[0]>b[0];
        return a[1]<b[1];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(),properties.end(),comp);
        int maxTillNow = INT_MIN;
        int ans=0;
        for(auto p:properties){
            if(maxTillNow>p[1]) ans++;
            else maxTillNow=p[1];
        }
        return ans;
    }
};