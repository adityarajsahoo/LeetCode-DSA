class Solution {
public:
    string truncateSentence(string s, int k) {
        int count = 0;
        string res = "";
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' ')
            {
                count++;
            }
            if(count == k)
            {
                break;
            }
            res.push_back(s[i]);
        }
        return res;
    }
};