class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>res;
        int n=max(s[1]-'0', s[4]-'0'); // max column or row
        int m=min(s[1]-'0', s[4]-'0'); // 1 column or row
        
        for(char c=s[0];c<=s[3];c++)
        {
            for(int i=m;i<=n;i++)
            {
                string t=c+to_string(i); // merges char and int (into string)
                res.push_back(t);
            }
        }
        return res;
    }
};