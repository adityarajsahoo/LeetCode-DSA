class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k = nums.size();
        return ((nums[k-1]-1)*(nums[k-2]-1));
    }
};