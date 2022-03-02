class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int k = nums.size();
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            int res = 0;
            for(int j =0;j<k;j++)
            {
                if(j!=i && nums[j]<nums[i])
                {
                    res++;
                }
            }
            ans.push_back(res);
        }
        return ans;
    }
};