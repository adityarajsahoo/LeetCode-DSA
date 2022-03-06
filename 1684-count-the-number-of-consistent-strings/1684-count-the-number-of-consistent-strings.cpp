class Solution {
public:
    bool countOccurence(string s, char c) // taken solution but learnt a lot. Learn maps soon.
    {
        int count = 0;
        for (int i = 0; i < s.size(); i++)
            if (s[i] == c) return true;
            
        return false;
    }
        
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        int consistent = words.size(); // good trick
        for(string word : words){
            for(char c : word){
                if(!countOccurence(allowed, c)) {
                    consistent--;
                    break;
                }
            }
        }
        return consistent;
    }
    
};