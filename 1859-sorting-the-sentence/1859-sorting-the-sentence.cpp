class Solution {
public:
    string sortSentence(string s) {
        string word;
        vector<string>v(10);
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i]>=48 && s[i]<=57)
            {
                v[s[i]-48] = word + " "; \\ ascii number - 48 , eg v[0] = word 1...
                word = ""; \\ no fill of number
                i++;
            }
            else
            {
                word = word + s[i]; \\ other letters of number
            }
        }
        string ans;
        for(string x:v)
        {
            ans = ans + x;
        }
        ans.pop_back(); \\ one extra space added at the end is removed
        return ans;
    }
};
