class Solution {
public:
    int balancedStringSplit(string s) {
        int r = 0, l = 0, count = 0;
        for(char ch:s)
        {
            if(ch == 'R')
            {
                r++;
            }
            else if(ch == 'L')
            {
                l++;
            }
            if(r == l)
            {
                count++;
                r =0;
                l =0;
            }
        }
        return count;
    }
};