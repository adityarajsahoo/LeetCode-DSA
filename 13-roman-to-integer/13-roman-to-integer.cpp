// https://leetcode.com/problems/roman-to-integer/discuss/2426521/100-C%2B%2B-oror-Clean-code-oror-fast-and-easy-oror-O(n)
class Solution {
public:
    int romanToInt(string s) {
    unordered_map<char,int> mp{
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000},
    };
    int ans =0;
    for(int i=0;i<s.size();i++){
        if(mp[s[i]]<mp[s[i+1]])
            ans-=mp[s[i]];
        else
            ans+=mp[s[i]];
    }
    return ans;
    }
};