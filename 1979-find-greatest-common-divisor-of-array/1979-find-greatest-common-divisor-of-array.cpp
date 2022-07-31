class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int min = nums[0];
        int max = nums[n-1];
        int i = 1;
        int ans = 1;
        while(i<min*max){
            if(min%i==0 and max%i==0){
                ans = i;
            }
            i++;
        }
        return ans;
    }
};