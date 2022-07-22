class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans1;
        vector<int> ans2;
        vector<int> res;
        for(int i=0; i<n; i++){
            if(nums[i]>=0){
                ans1.push_back(nums[i]);
            }
            else{
                ans2.push_back(nums[i]);
            }
        }
        for(int j=0; j<ans1.size(); j++){
            res.push_back(ans1[j]);
            res.push_back(ans2[j]);
        }
        return res;
    }
};