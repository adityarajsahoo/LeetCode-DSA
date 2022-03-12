class Solution {
public:
    string replaceDigits(string s) {
        for(int i=1; i<s.size(); i+=2) // digit traversing
        {
            s[i] = s[i-1] + (s[i]-'0'); // alphabet + digit = next aplhabet i.e a+1 = b (ascii)
        }
        return s;
    }
};