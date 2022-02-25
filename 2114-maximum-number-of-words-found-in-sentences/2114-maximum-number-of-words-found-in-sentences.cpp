class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for(auto const &s : sentences)
        {
            int n = count(s.begin(), s.end(), ' ');
            ans = max(ans, n+1);
        }
        return ans;
    }
};