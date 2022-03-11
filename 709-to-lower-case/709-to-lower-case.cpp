class Solution {
public:
    string toLowerCase(string s) {
        for(auto& ch:s)
        {
            ch = tolower(ch);
        }
        return s;
        //auto keyword specifies that the type of the variable that is begin declared will automatically be deduced from its initializer.
    }
};