class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        
        // simple binary search is the solution
        // Peak exists somewhere in between start and end
        int s = 1, e = n-2;
        while(s<=e){
            int mid = s + (e - s)/2;
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid;
            else if(arr[mid-1] > arr[mid]) e = mid-1;
            else s = mid+1;
        }
        return -1;
    }
};