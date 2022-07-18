class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int k = nums.size();
        int sum = 0;
        sort(nums.begin(),nums.end());
        
        for(int i=0; i<k/2; i++){
            sum = max(sum, nums[i] + nums[k-1-i]);
        }
        
        return sum;
         
    }
};