class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = index.size();
    	// 1. make correct index
    	for (int i = 0; i < n; i++) {
    		for (int j = 0; j < i; j++) {
    			if (index[j] >= index[i]) {
    				index[j]++;
    			}
    		}
    	}

    	vector<int> res(n);
		// 2. set value
    	for (int i = 0; i < n; i++) {
    		res[index[i]] = nums[i]; 
    	}

    	return res;
    }
};