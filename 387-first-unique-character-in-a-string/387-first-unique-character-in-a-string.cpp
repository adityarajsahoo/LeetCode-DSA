// CPP Hashmap
// https://leetcode.com/problems/first-unique-character-in-a-string/discuss/1125015/CPP-oror-Hashmaps-oror
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> map;
        
        for(int i=0; i<s.length(); i++)
        {
            if(map.count(s[i])==0)
                map[s[i]] = 1;
            else
                map[s[i]]++;   
        }
        for(int i=0; i<s.length(); i++)
            if(map[s.at(i)] == 1)
                return i;
        return -1;
    }
};