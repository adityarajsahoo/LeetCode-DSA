class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_s = 0;
        int m = accounts.size();
        int n = accounts[0].size();
        
        for(int i = 0; i<m;i++)
        {
            int curr_s = 0;
            for(int j =0; j<n;j++)
            {
                curr_s += accounts[i][j];
            }
            max_s = max(max_s,curr_s);
        }
        return max_s;
    }
};


// n is traversing over the bank values of customer
// m is traversing over the no of customers
