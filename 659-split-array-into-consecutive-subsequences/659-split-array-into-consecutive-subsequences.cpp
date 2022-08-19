// https://www.youtube.com/watch?v=Gmc-4Dpzw2g
class Solution {
public:
    bool isPossible(vector<int>& nums) {
        int sz = nums.size();
        map<int,int> map,check;
        for(int i=0;i<sz;i++){
            map[nums[i]]++;
        }
        
        for(int it = 0;it<sz;it++){
            if(map[nums[it]]<=0)
                continue;
            
            if(check[nums[it]-1]>0)
            {
                check[nums[it]-1]--;
                map[nums[it]]--;
                check[nums[it]]++;
            }
            
            else if(map[nums[it]+1] and map[nums[it]+2]){
                map[nums[it]]--;
                map[nums[it]+1]--;
                map[nums[it]+2]--;
                check[nums[it]+2]++;
            }
            else 
                return false;
        }
        return true;
    }
};