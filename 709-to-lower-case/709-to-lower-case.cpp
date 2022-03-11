class Solution {
public:
    string toLowerCase(string s) {
        for(auto& ch:s)
        {
            ch = tolower(ch);
        }
        return s;
        //auto keyword specifies that the type of the variable that is begin declared will automatically be deduced from its initializer and for functions if their return type is auto then that will be evaluated by return type expression at runtime.
    }
};