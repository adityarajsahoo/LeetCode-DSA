class Solution {
public:
    bool checkpalindrome(string s, char c)
    {
        int i = 0;
        int j = s.size() - 1;
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    
    string firstPalindrome(vector<string>& words) {
        
        for(string word: words)
        {
            for(char c: word)
            {
                if(checkpalindrome(word,c))
                {
                    return word;
                }
            }
        }
        return "";
    }
};