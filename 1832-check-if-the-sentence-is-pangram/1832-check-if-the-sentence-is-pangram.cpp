class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> ans(26,0);
        for(char x: sentence)
        {
            ans[x - 'a'] = 1;
        }
        return accumulate(ans.begin(),ans.end(),0) == 26;
    }
};