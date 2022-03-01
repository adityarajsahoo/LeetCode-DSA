class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int k = s.length();
        string answer = s;
        for(int i=0; i<k; i++)
        {
            s[indices[i]] = answer[i];
        }
        return s;
    }
};