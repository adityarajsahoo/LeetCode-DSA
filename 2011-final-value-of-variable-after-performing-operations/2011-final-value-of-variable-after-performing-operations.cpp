class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int m = operations.size();
        int x = 0;
        for(int i =0; i<m; i++)
        {
            if(operations[i][1] == '+')
            {
                x++;
            }
            else
            {
                x--;
            }
        }
        return x;
    }
};